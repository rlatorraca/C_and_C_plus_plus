/* ============================================================================

    Program: Protocol que verifica 2 operandos. retorna H de high, ou L de low.

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
/* --- FUNCTIONS PROTOTYPE --- */
char protocol(int operator01, int operator02);

print_check_operators(int operator01, int operator02, char (*func)(int *, int *));

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    // Set all categories and return "en-US"
    setlocale(LC_ALL, "en-US");

    int operator01 = 0, operator02 = 0;

    printf("Enter operator 01: ");
    scanf("%d", &operator01);

    printf("Enter operator 02: ");
    scanf("%d", &operator02);

    print_check_operators(operator01, operator02, protocol);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCION --- */
char protocol(int operator01, int operator02)
{
    char response;
    response = operator01 > operator02 ? 'H' : 'L';

    return response;
}

print_check_operators(int operator01, int operator02, char (*func)(int *, int *))
{
    char test = (*func)(operator01, operator02);
    if (test == 'H')
    {
        printf("%d > %d , so protocol is \"H\"\n", operator01, operator02);
    }
    else
    {
        printf("%d < %d , so protocol is \"L\"\n", operator01, operator02);
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
