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
/* --- FUNCTION PROTOTYPE --- */

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    int var;
    int *pointer = NULL; // ponteiro para um inteiro

    var = 20;

    pointer = &var; // aponta pointer para o endereco da varaivel var

    // Usando "&" mostra o local de armazenamento na memoria do computador

    printf("Value in Decimal [var]:\t\t\t\t\t\t%d\n", var);             // mostra em Decimal => %d
    printf("Value in Decimal [&var]:\t\t\t\t\t%d\n", &var);             // mostra em Decimal => %d (End de memoria)
    printf("Value in Decimal [pointer]:\t\t\t\t\t%d\n", pointer);       // mostra em Decimal => %d (End de memoria)
    printf("Value in Decimal [*pointer]:\t\t\t\t\t%d\n", *pointer);     // mostra em Decimal => %d (conteudo de var)
    printf("Value in Hexadecimal [*pointer]:\t\t\t\t%x\n\n", *pointer); // mostra em Hexadecimal => %x conteudo de var)

    printf("Address of memory position in hexadecimal [&var]\t\t\t%x\n", &var);        // mostra em Hexadecimal => %x ((End de memoria de var))
    printf("Address of memory position in hexadecimal [&pointer]:\t\t%x\n", &pointer); // mostra em Hexadecimal => %x (End de memoria de pointer)

    printf("Address of memory position in Parametrized Hexadecimal [&var]:\t\t%p\n", &var); // motras em Parametrized Hexadecimal a maquina/ S.O. => %p
    printf("Address of memory position in [&pointer]:\t\t\t%p\n", &pointer);                // motras em Parametrized Hexadecimal a maquina/ S.O. => %p

    *pointer = 100;

    printf("\n\n++++ After *pointer = 100 +++++\n");                    // mostra em Decimal => %d
    printf("Value in Decimal [var]:\t\t\t\t\t\t%d\n", var);             // mostra em Decimal => %d conteudo de pointer)
    printf("Value in Decimal [pointer]:\t\t\t\t\t%d\n", pointer);       // mostra em Decimal => %d
    printf("Value in Decimal [*pointer]:\t\t\t\t\t%d\n", *pointer);     // mostra em Decimal => %d
    printf("Value in Hexadecimal [*pointer]:\t\t\t\t%x\n", *pointer);   // mostra em Hexadecimal => %x
    printf("Value in Hexadecimal [*pointer]:\t\t\t\t%p\n\n", *pointer); // motras em Parametrized Hexadecimal a maquina/ S.O. => %p

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
