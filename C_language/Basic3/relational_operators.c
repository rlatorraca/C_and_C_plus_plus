/* ============================================================================

    Program: Example of Relational Operatorss

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

    int a = 2, b = 5;

    printf("Q: %d == %d; A: %d      [0 => False / Other => True]\n", a, b, a == b);
    printf("Q: %d > %d; A: %d       [0 => False / Other => True]\n", a, b, a > b);
    printf("Q: %d >= %d; A: %d      [0 => False / Other => True]\n", a, b, a >= b);
    printf("Q: %d < %d; A: %d       [0 => False / Other => True]\n", a, b, a < b);
    printf("Q: %d <= %d; A: %d      [0 => False / Other => True]\n", a, b, a <= b);
    printf("Q: %d != %d; A: %d      [0 => False / Other => True]\n", a, b, a != b);

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