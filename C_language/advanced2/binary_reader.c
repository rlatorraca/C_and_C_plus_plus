/* ============================================================================

    Program: Mprojeto de um leitor binário que apresente na tela os
    bytes organizados

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* ========================================================================= */
/* --- CONSTANTS --- */

/* ========================================================================= */
/* --- MACROS --- */

/* ========================================================================= */
/* --- STRUCTS || UNIONS --- */

/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPES --- */
void print_file(FILE *file, char file_name[]);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{

    FILE *file;
    char name[31] = {0}, *file_name;

    printf("Enter a file name and extension [Ex: <file_name>.<extension>]: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Retira o ENTER incluido pelo fgets

    file_name = (char *)malloc(strlen(name) + 1);

    strcpy(file_name, name);

    if (file = fopen(file_name, "r"))
    {
        fclose(file);
        printf("File exists");
    }
    else
    {
        file = fopen(file_name, "wb");
        fclose(file);
    }

    if (file_name == NULL)
    {
        puts("Out of Memory [RLSP]\n");
        system("read -p '\nPress Enter to exit...[RLSP] - 1\n' key");
        exit(1);
    }

    if (file == NULL)
    {
        printf("ERROR...opening file [RLSP].\n");
        system("read -p '\nPress Enter to exit...[RLSP] - 2\n' key");
        exit(2);
    }
    else
    {
        printf("File created successfully!\n\n");
    }

    file = fopen(file_name, "ab");
    for (char i = 1; i < 16; i++)
    {
        for (char j = 1; j < 16; j++)
        {
            char temp_i[1];
            char temp_j[1];
            temp_i[0] = i;
            temp_j[0] = j;
            char temp_final[2] = {'\0'};
            strcat(temp_final, temp_i);
            strcat(temp_final, temp_j);
            fputc(temp_final[0], file);
            fputc(temp_final[1], file);
            printf("%x", temp_final[0]);
            printf("%x\t", temp_final[1]);
        }
        printf("\n");
    }
    fclose(file);

    printf("\nFile Saved successfully!\n\n");

    printf("\nFile closed successfully!\n\n");

    print_file(file, file_name);
    fclose(file);
    free(file_name);
    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP] - 3\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
void print_file(FILE *file, char file_name[])
{

    unsigned int num_characters = 0, loop = 1, i = 0;
    unsigned char *palloc;
    int ch;

    file = fopen(file_name, "r");

    while ((fgetc(file)) != EOF)
        num_characters++;



    /* aloca memória de acordo com tamanho do arquivo */
    palloc = (unsigned char *) malloc(num_characters * sizeof(char));

    if(palloc == NULL)
    {
        printf("Out of memory.\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key");
        exit(0);
    }

    rewind(file);

    /* Le e armazena os caracteres */
    while((ch = fgetc(file)) != EOF)
    {
        if(i <= num_characters){
            palloc[i] = ch;
        }
        i++;
    }

    i=1;
    int char_line = 1;
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    while( i <= num_characters){

        if(char_line <= 19)
            printf("%x", palloc[i]);
        else
            printf("%x\n", palloc[i]);

        if(i % 2 ==0 && char_line <= 19){
            printf("%c", ' ');
        }

        if(char_line > 19){
            char_line=1 ;
        } else{
            char_line++;
        }
        i++;
    }

    int x = 1, chars_line = 1;
    printf("\n===================================================\n");

    while ((ch = fgetc(file)) != EOF) // feof = file end of file (Retorn TRUE quando for o fim do arquivo)
    {
        if (loop <= num_characters)
        {

            if (loop % 3 == 0 && x != 30)
            {
                printf("%c", ' ');
                printf("%x", ch);
                loop += 2;
                x += 2;
            }
            else
            {
               if (x == 29)
                {
                    printf("%x\n", ch);
                    x++;
                } else  if(x > 29){
                    x=1;
                }
                else
                {
                    printf("%x", ch);
                    x++;
                }
                loop++;

            }

        }
    }
}

/* ============================================================================
===============================================================================
===============================================================================
===============================================================================
===============================================================================
===============================================================================
================================              =================================
================================  PROGRAM END =================================
================================              =================================
===============================================================================
===============================================================================
===============================================================================
===============================================================================
===============================================================================
===============================================================================
============================================================================ */