/* ============================================================================

    Program: Solicita ao usuario a entrada do range (inicio e fim) de frenquencia em Hz,
    e faz a impressao da sequencia com base no inicio e fim inseridos pelo usuario

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{
    int initial = 0;
    int final = 0;

    printf("Enter INITIAL frequency (Hz): ");
    scanf("%d", &initial);

    printf("Enter FINAL frequency (Hz): ");
    scanf("%d", &final);

    while (initial <= final)
    {
        printf("%4d Hz\n", initial);
        initial++;
    } /* end while*/

    putchar('\n'); /* Imprime um caracter UNICO na tela*/

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

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