/* ============================================================================

    Program: REALLOC

    Esta função tem o objetivo de modificar o tamanho da memória que foi
    previamente alocada e apontada por ptr para o tipo size. A função realloc
    retorna um ponteiro para o bloco de memória, pois ela poderá mover esse
    bloco para ampliar seu tamanho. Se ptr for NULL, realloc devolve um ponteiro
    para a memória alocada. Caso size seja zero, será liberada a memória apontada
    por ptr. O código abaixo ilustra uma aplicação do realloc, quando deseja-se
    realocar espaço para concatenar duas strings.

        void *realloc(void *ptr, size_t size);

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
long *vector_long(unsigned qtd);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{

    char *palloc;

    palloc = malloc(8);

    if(!palloc) /* 1 ou algum valor = TRUE | 0 = false [oposto a qualquer valor]*/
    {
        puts("Fatal error");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key");
        exit(1);
    }
    strcpy(palloc,"RLSP"); /* Copia "RLSP" para dentro do palloc*/

    printf("Before realloc() : %s\n", palloc);
    printf("palloc size      : %d\n", strcspn(palloc, "\n"));

    palloc = realloc(palloc,19); /* REALOCA para 19 bytes */

    if(!palloc)
    {
        puts("Fatal error");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key");
        exit(1);
    }
    strcat(palloc," Holland College"); /* Concatenate two strings */

    printf("\nAfter realloc()  : %s\n", palloc);
    printf("palloc size      : %d\n", strcspn(palloc, "\n"));

    free(palloc);

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */
long *vector_long(unsigned qtd)
{
    long *palloc;
    palloc = calloc(qtd, sizeof(long));
    printf("!palloc = %2d\n", !palloc);
    printf("palloc  = %2d\n", palloc);
    if(!palloc) /* 1 ou algum valor = TRUE | 0 = false [oposto a qualquer valor]*/
    {
        printf("Fatal error\n");
        exit(1);
    }
    return palloc;
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
