/* ============================================================================

    Program: Serie Fibonacci
    0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597

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

    int number, number_before = 0, number_actual = 0, temp = 0;

    printf("Enter a number between [1-1000], to get calculate FIBONACCI: ");
    scanf("%d", &number);

    printf("Result: ");

    while (number_actual <= number)
    {

        if (number_actual == 0 && number_before == 0)
        {
            printf("0 ");
            number_actual++;

            continue;
        }
        else if (number_actual == 1 && number_before == 0)
        {
            printf("1 1 ");
            temp = number_before;
            number_before = number_actual;
            number_actual = number_actual + temp;

            continue;
        }

        temp = number_before;
        number_before = number_actual;
        number_actual = temp + number_actual;

        printf("%d ", number_actual);
    }

    printf("\nFIBONACCI done !!!\n");

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

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