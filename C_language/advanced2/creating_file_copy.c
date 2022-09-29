/* ============================================================================

    Program: FILES in C


        FILE *nome; => declarando um ponteiro para arquivo


        FILE *fopen(const char *filename, const char *mode);


    Os modos possíveis para abertura estão explícitos abaixo:

    Modo            Significado
    r               Abre um arquivo-texto para leitura (read)
    w               Cria um arquivo-texto para escrita (write)
    a               Acrescenta dados a um arquivo-texto (append)
    rb              Abre um arquivo binário para leitura (read binary)
    wb              Cria um arquivo binário para escrita (write binary)
    ab              Acrescenta dados a um arquivo binário (append binary)
    r+              Abre um arquivo-texto para leitura/escrita
    w+              Cria um arquivo-texto para leitura/escrita
    a+              Acrescenta ou cria um arquivo-texto para leitura/escrita
    r+b             Abre um arquivo binário para leitura/escrita
    w+b             Cria um arquivo binário para leitura/escrita
    a+b             Acrescenta a um arquivo binário para leitura/escrita



        int fclose(FILE *arq);

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
/* --- FUNCTIONS PROTOTYPES --- */

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    FILE *file_rlsp, *file_rlsp_copy;
    int char_read_file;
    int size = 0, letter_a_counter = 0, number_lines_counter = 0;

    // Abre ao arquivo para leitura
    if ((file_rlsp = fopen("teste.txt", "r")) == NULL)
    {
        printf("ERROR - reading ...\n");
        system("pause");
        exit(1);
    }

    // Cria um arquivo para fazer a copia
    if ((file_rlsp_copy = fopen("teste_copy.txt", "w")) == NULL)
    {
        printf("ERROR - writing ...\n");
        system("pause");
        exit(2);
    }

    size = ftell(file_rlsp_copy); // see if file is empty (size 0)

    if (size == 0)
    {
        while ((char_read_file = fgetc(file_rlsp)) != EOF)
        {
            printf("%c", char_read_file);
            fputc(char_read_file, file_rlsp_copy);

            // Conta quantas letras A existem no arquivo
            if (char_read_file == 'a' || char_read_file == 'A')
                letter_a_counter++;

            // Conta quantas linhas tem arquivo - 0x0A [10] = Line Feed / New Line
            if (char_read_file == '\n')
                number_lines_counter++;
        }
    }

    printf("\n +++ Success +++  File is copied !!!\n");
    printf("\n\nTotal Letters 'A' => %d\n", letter_a_counter);
    printf("Total number of lines => %d\n", number_lines_counter); // adicionamos +1 para contar a ultima linnha

    fclose(file_rlsp);
    fclose(file_rlsp_copy);

    /* Press Enter to continue ... */
    system("read -p '\nPress Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

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
