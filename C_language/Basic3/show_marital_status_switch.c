/* ============================================================================

    Program: Solicita entrada da idade e estado civil por inicial do estado civil
    (maisuculas e minusculas) e imprime na tela idade e estado civil
        S = single
        M = married
        D = divorced
        W = widowed / widow

        switch (expression)
        {
            case option1 :
                commands;
                break;

            case option2 :
                commands;
                break;

            case option3 :
                commands;
                break;

            default:
                commands
        }

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
    int age;
    char marital_status;

    printf("Enter your marital status : \n");
    scanf("%c", &marital_status);

    printf("Enter your age : ");
    scanf("%d", &age);

    switch (marital_status)
    {
    case 'S':
    case 's':
        printf("You're %d years-old and Single\n", age);
        break;
    case 'M':
    case 'm':
        printf("You're %d years-old and Married\n", age);
        break;

    case 'd':
    case 'D':
        printf("You're %d years-old and Divorced\n", age);
        break;

    case 'W':
    case 'w':
        printf("You're %d years-old and Widowed/Widow\n", age);
        break;

    default:
        printf("You're %d years-old, but NO MARITAL STATUS selected \n", age);
        break;
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