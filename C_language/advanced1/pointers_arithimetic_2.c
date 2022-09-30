/* ============================================================================

    Program: Arithimetic Pointers

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
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    // Set all categories and return "en-US"
    setlocale(LC_ALL, "en-US");

    short vec1[3] = {12, 15, 17};
    long vec2[3] = {22, 17, 33};
    short *p1 = NULL;
    long *p2 = NULL;
    register int i;

    p1 = vec1;
    p2 = vec2;

    printf("  +++++ VC1 +++++ \n");
    for (i = 0; i < 3; i++)
    {
        printf("\t%hd\n", vec1[i]);
    }
    printf("  +++++ VC2 +++++\n");
    for (i = 0; i < 3; i++)
    {
        printf("\t%ld\n", vec2[i]);
    }

    for (i = 0; i < 3; i++)
    {
        *(p1 + i) = 2 * i;
        *(p2 + i) = 3 * i;
    }

    printf("\nVec1 Vec2\n");

    for (i = 0; i < 3; i++)
        printf("% 2d    %2ld\n", vec1[i], vec2[i]);

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
