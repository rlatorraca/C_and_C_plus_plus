/* ============================================================================

    Program: Pointer examples
        Ponteiro consiste em uma variavel que contem um endereco de memoria normalmente e o
        endereco de outra variavel.
        Em outras palavras, sao apontadores de enderecos de memoria. Quando um ponteiro contem
        o endereco de uma variavel, dizemos que ele aponta para o endereco da referida variavel.
        Com ponteiros, podemos modificar argumentos de funcoes, trabalhar com alocacao dinamica
        de memoria e tambem tornar certas rotinas mais eficientes.

        Para declarar um ponteiro, precisamos utilizar o operador *.

                type *pointer_name

        * => operador de indirecao (por trabalhar de forma indireta com o conteudo)
            - apontado por [_pointer_name_]
        & => operador unario e devolve o endereco de memoria do seu operado


        -so pode apontar para para enderecos de variavesi que tenham o memso tipo de dados
        que o proprio inteiro


        ponterio DEVE sempre ser inicializado :
            - *pointer = NULL; (NULL = end de memoria '0')


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
#include <unistd.h>

/* ========================================================================= */
/* --- MACROS --- */
#include "macros.c"

/* ========================================================================= */
/* --- FUNCTION PROTOTYPE --- */

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    short *ptr, var1, var2, update = 0;

    var1 = 0;
    ptr = NULL;
    var2 = 0;

    while (1)
    {
        system("clear");
        mapA;
        mapB;

        printf("var2,var1: ");
        scanf("%hd%*c%hd", &var2, &var1); // %*c => desconsidera o carater entre os inumero (var 2 e var1) Ex: , espaco, %

        system("clear");
        mapA;
        mapB;

        printf("ptr: \n");
        printf("1. aponta para var1\n");
        printf("2. aponta para var2\n");
        printf(">>> ");
        scanf("%hd", &update);

        if (update == 1)
            ptr = &var1;
        else
            ptr = &var2;

        system("clear");
        mapA;
        mapB;

        printf("*ptr: ");
        scanf("%hd", ptr); // nao tem "&" pois ptr ja eh um pontiro
    }

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

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
