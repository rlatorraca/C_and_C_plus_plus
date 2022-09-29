/* ============================================================================

    Program: Exemple of NESTED FOR LOOP

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
    int i, j;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 11; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

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