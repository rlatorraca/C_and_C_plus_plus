/* ============================================================================

    Program: Exemple of FOR LOOP para pares de 0 a 50 (com 2+ variaveis de
    controller )

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */
#if HAVE_STROPTS_H
#include <stropts.h>
#endif

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{

    setlocale(LC_ALL, "fr_Canada");

    short a, b;

    printf("\n");

    for (a = 0, b = 0; a + b <= 50; a++, b++)
    {
        printf("%2d ", a + b);
    }

    printf("\n\n");

    for (a = 0, b = 50; a + b <= 500; a = a + 3, b = b + 5)
    {
        printf("%3d ", a + b);
    }
    printf("\n\n");

    /* Press Enter to continue ... */
    system("read -p '\nPress Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

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