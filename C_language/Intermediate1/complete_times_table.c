/* ============================================================================

    Program: Imprime a tabuada do 1 a 9

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

    int tab = 1, increment;

    while (tab <= 20)
    {
        printf("+++++ Times table of %d +++++\n", tab);

        increment = 0;

        while (increment <= 10)
        {
            printf("%d x %2d = %3d\n", tab, increment, tab * increment); /* %3d => reserva 3 espacos dna tela para impressao */
            increment++;
        } /* end while*/
        tab++;
        putchar('\n'); /* Imprime um caracter UNICO na tela*/

    } /* end while*/

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