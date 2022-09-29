/* ============================================================================

    Program: Vector and Pointers
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

    int vector_int[10] = {1, 2, 3};
    int *pointer_int = NULL;

    float vector_float[10] = {1.12, 2.23, 3.34};
    float *pointer_float = NULL;

    char vector_string[10] = "RLSP";
    char *pointer_string = NULL;

    pointer_int = vector_int;
    pointer_float = vector_float;
    pointer_string = vector_string;

    printf("vector_int: %x\n", vector_int);          // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_int: %d\n\n", vector_int);        // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_int[0]: %x\n", &vector_int[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_int[0]: %d\n", &vector_int[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_int[1]: %x\n", &vector_int[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_int[1]: %d\n", &vector_int[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_int[1]: %x\n", &vector_int[2]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_int[1]: %d\n\n", &vector_int[2]); // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array

    printf("+++++++++++++++++++++++++++++++++\n");

    printf("pointer_int: %x\n", pointer_int);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("pointer_int: %d\n\n", pointer_int); // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array

    printf("&pointer[0]: %x\n", &pointer_int[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer[0]: %d\n", &pointer_int[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer[1]: %x\n", &pointer_int[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer[1]: %d\n", &pointer_int[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer[2]: %x\n", &pointer_int[2]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer[2]: %d\n\n", &pointer_int[2]); // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array

    printf("*pointer_int: %x\n", *pointer_int);         // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int: %d\n\n", *pointer_int);       // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int+1: %x\n", *pointer_int + 1);   // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int+1: %d\n\n", *pointer_int + 1); // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int+2: %x\n", *pointer_int + 2);   // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int+2: %d\n\n", *pointer_int + 2); // Valor da PRIMEIRA posicao do vetor/array

    *pointer_int = 1000;
    *(pointer_int + 1) = 2000;

    printf("*pointer_int = 1000: %x\n", *pointer_int);   // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int = 1000: %d\n\n", *pointer_int); // Valor da PRIMEIRA posicao do vetor/array

    printf("*pointer_int+1 = 2000: %x\n", *pointer_int + 1);   // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int+1 = 2000: %d\n\n", *pointer_int + 1); // Valor da PRIMEIRA posicao do vetor/array

    printf("==================================================================\n");
    printf("==================================================================\n");
    printf("==================================================================\n");

    printf("vector_float: %x\n", vector_float);          // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_float: %d\n\n", vector_float);        // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_float[0]: %x\n", &vector_float[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_float[0]: %d\n", &vector_float[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_float[1]: %x\n", &vector_float[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_float[1]: %d\n", &vector_float[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_float[1]: %x\n", &vector_float[2]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("vector_float[1]: %d\n\n", &vector_float[2]); // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array

    printf("+++++++++++++++++++++++++++++++++\n");

    printf("pointer_float: %x\n", pointer_float);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("pointer_float: %d\n\n", pointer_float); // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array

    printf("&pointer_float[0]: %x\n", &pointer_float[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer_float[0]: %d\n", &pointer_float[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer_float[0]: %p\n", &pointer_float[0]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer_float[1]: %x\n", &pointer_float[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer_float[1]: %d\n", &pointer_float[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer_float[1]: %p\n", &pointer_float[1]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer_float[2]: %x\n", &pointer_float[2]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer_float[2]: %d\n", &pointer_float[2]);   // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array
    printf("&pointer_float[2]: %p\n\n", &pointer_float[2]); // Endereco de memoria / Ponteiro da PRIMEIRA posicao do vetor/array

    printf("*pointer_float: %X\n", *pointer_float);           // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_float: %p\n", *pointer_float);           // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_float: %.2f\n\n", *pointer_float);       // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_float+1: %X\n", *pointer_float + 1);     // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_float+1: %p\n", *pointer_float + 1);     // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_float+1: %.2f\n\n", *pointer_float + 1); // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_float+2: %X\n", *pointer_float + 2);     // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_float+2: %p\n", *pointer_float + 2);     // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_float+2: %.2f\n\n", *pointer_float + 2); // Valor da PRIMEIRA posicao do vetor/array

    *pointer_float = 1000.99;

    printf("*pointer_int = 1000: %x\n", *pointer_float);     // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int = 1000: %p\n", *pointer_float);     // Valor da PRIMEIRA posicao do vetor/array
    printf("*pointer_int = 1000: %.2f\n\n", *pointer_float); // Valor da PRIMEIRA posicao do vetor/array

    printf("==================================================================\n");
    printf("==================================================================\n");
    printf("==================================================================\n");

    printf("vector_string: %x\n", vector_string);
    printf("vector_string: %s\n\n", vector_string);

    printf("vector_string + 1: %x\n", vector_string + 1);
    printf("vector_string + 1: %s\n\n", vector_string + 1);
    printf("vector_string[1]: %c\n\n", vector_string[1]);

    *(pointer_string + 4) = '!';

    printf("pointer_string: %x\n", pointer_string);
    printf("pointer_string: %s\n\n", pointer_string);

    *(pointer_string + 4) = '?';
    printf("pointer_string: %x\n", pointer_string);
    printf("pointer_string: %s\n\n", pointer_string);

    for (char i = 0; i < 9; i++)
    {
        *(pointer_string + i) = 0x30 + i;
    }

    printf("pointer_string: %x\n", pointer_string);
    printf("pointer_string: %s\n\n", pointer_string);
    printf("vector_string: %s\n\n", vector_string);

    for (char i = 0; i < 9; i++)
    {
        *(pointer_string + i) = 48 + i;
    }

    printf("pointer_string: %x\n", pointer_string);
    printf("pointer_string: %s\n", pointer_string);
    printf("vector_string: %s\n\n", vector_string);

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

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
