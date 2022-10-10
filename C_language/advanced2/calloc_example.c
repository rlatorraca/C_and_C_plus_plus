/* ============================================================================

    Program: MALLOC vs CALLOC

    Inicialização:

    1) malloc() aloca o bloco de memória de determinado tamanho (em bytes) e
    retorna um ponteiro para o início do bloco. malloc() não inicializa a
    memória alocada. Se tentarmos acessar o conteúdo do bloco de memória
    (antes da inicialização), obteremos um erro de falha de segmentação
    (ou talvez valores de lixo).

        void* malloc(size_t size);

    2) calloc() aloca a memória e também inicializa o bloco de memória alocado
    para zero. Se tentarmos acessar o conteúdo desses blocos, obteremos 0.

        void* calloc(size_t num, size_t size);

    Número de argumentos: Ao contrário de malloc(), calloc() leva dois argumentos:
        1) Número de blocos a serem alocados.

        2) Tamanho de cada bloco.
        Valor de retorno: após a alocação bem-sucedida em malloc() e calloc(),
        um ponteiro para o bloco de memória é retornado, caso contrário valor NULL
        é retornado, o que indica a falha de alocação.


    Por exemplo, se quisermos alocar memória para uma array de 5 inteiros, consulte
    o seguinte programa (abaixo):

    Podemos obter a mesma funcionalidade de calloc() usando malloc() seguido por memset(),

        ptr = malloc(size);
        memset(ptr, 0, size);

    Nota: Seria melhor usar malloc em vez de calloc, a menos que queiramos a
    inicialização do zero porque malloc é mais rápido que calloc. Portanto,
    se quisermos apenas copiar alguma coisa ou fazer algo que não requeira o
    preenchimento dos blocos com zeros, então malloc seria uma escolha melhor

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

    long *ptr;
    register int i;

    ptr = vector_long(20);

    for(i=0;i<20;i++)
        ptr[i] = i+1;

    for(i=0;i<20;i++)
        printf("ptr[%2d] = %2d\n", i, ptr[i]);

    free(ptr);

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
