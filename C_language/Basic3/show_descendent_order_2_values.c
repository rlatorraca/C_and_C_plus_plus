/* ============================================================================

    Program: Le 2 valores do teclado e apresenta os valores em ordem decrescente

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
    /*
        Operadores Relacionais em C:
            a) == (igualdade)
            b) > (maior que)
            c) >= (maior ou igual que)
            d) < (menor que)
            e) <= (menor ou igual que)
            f) != (diferente de)
    */

    float a = 0.0, b = 0.0, temp = 0.0;

    printf("Enter a value for A: ");
    scanf("%f", &a);

    printf("Enter a value for B: ");
    scanf("%f", &b);

    if (a > b)
    {
        printf("Descrecent Ordenation for %.2f and %.2f is => %.2f %.2f\n", a, b, a, b);
    }
    else
    {
        printf("Descrecent Ordenation for %.2f and %.2f is => %.2f %.2f\n", a, b, b, a);
    }

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

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