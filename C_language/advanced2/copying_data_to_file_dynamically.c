/* ============================================================================

    Program: Le algum arquivo e realizar

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
/* --- FUNCTIONS PROTOTYPES | STRUCT --- */


/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{

    FILE *file;
    unsigned char *palloc;
    unsigned long int num_characters=0,i=0;
    int chr;

    file = fopen("code.txt", "r");

    if(file == NULL)
    {
        printf("ERROR...opening file [RLSP].\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key");
        exit(0);
    }
    printf("File opened successfully!\n");

    while((chr = fgetc(file)) != EOF)
        num_characters++;

    printf("File size: %lu bytes\n", num_characters);
    rewind(file); /* ponteiro retorna ao início do arquivo */

    /* aloca memória de acordo com tamanho do arquivo */
    palloc = (unsigned char *) malloc(num_characters * sizeof(char));

    if(palloc == NULL)
    {
        printf("Out of memory.\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key");
        exit(0);
    }
/* armazena os caracteres */
    while((chr = fgetc(file)) != EOF)
    {
        if(i <= num_characters) palloc[i] = (unsigned char) chr;
        i++;
    }
    for(i=0; i < num_characters; i++)
        printf("%c",palloc[i]);
    fclose(file);
    free(palloc);
/* fecha arquivo */
/* libera memória */


    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Execution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

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

