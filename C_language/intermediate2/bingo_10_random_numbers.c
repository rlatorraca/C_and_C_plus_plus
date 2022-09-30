/* ============================================================================

    Program: Faz o sorteio de 10 numeros aleatorios de 8 bits e imprimi-os
    na tela

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* --- MACROS ---*/

#define draw10                                                  \
    register int x;                                             \
    for (int i = 0; i < 10; i++)                                \
    {                                                           \
        int number = rand();                                    \
        \   
        printf("[%d]%d in 31 bits\n", i, number);               \
        printf("[%d]%d in 8 bits \n\n", i, (number / 8388608)); \
    }

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");
    draw10;

    /* Standard way
    int number = rand(); // Gera um numero aleatorio de 15 bits 0-32767
                         // Para normalizar para 8 bits temos que dividir 15bits - 8bits = 7bits
                         //    (2^31 / 2^8(=128) = 2^27 (=8388608)  => 31bits - 8 bits = 27 bits
                         //



    for (int i = 0; i < 10; i++)
    {
        int number = rand();
        printf("[%d]%d in 31 bits\n", i, number);
        printf("[%d]%d in 8 bits \n\n", i, (number / 8388608));
    }
    */

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

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
