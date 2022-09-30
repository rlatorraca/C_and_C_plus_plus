/* ============================================================================

    Program: Example of "Casting"

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
        TIPOS DIFERENTES em MESMA EXPRESSAO (Casting) => Occorre PROMOCAO, se:

        1) Atributte 1 (LONG DOUBLE) => Atribute 2 sera convertido (LONG DOUBLE)
        2) Atributte 1 (DOUBLE) => Atribute 2 sera convertido (DOUBLE)
        3) Atributte 1 (FLOAT) => Atribute 2 sera convertido (FLOAT)
        4) Atributte 1 (LONG) => Atribute 2 sera convertido (LONG)
        5) Atributte 1 (UNSIGNED LONG) => Atribute 2 sera convertido (UNSIGNED LONG)
        6) Atributte 1 (UNSIGNED INT) => Atribute 2 sera convertido (UNSIGNED INT)

    */

    char ch = 10;
    int i = 2;
    float f = 1.5;
    double d = 4.88, result = 0.0;

    result = (ch / i) + (f * d) - (f + i);

    printf("Result = %.2f [ using 2 ]\n", result);

    i = 4;
    result = (ch / i) + (f * d) - (f + i);
    printf("Result = %.2f [ using 4 -> lose 0.5 NOT casting]\n", result);

    /* WITH Casting */
    result = ((float)ch / (float)i) + (f * d) - (f + i);
    printf("Result = %.2f [ using 4 -> using CASTING]\n", result);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

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