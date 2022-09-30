/* ============================================================================

    Program: Verifica a nota que o aluno tirou. E com base na nota, distribui
    a bolsa de estudos.
        - nota 7   = 10%
        - nota 8   = 20%
        - nota 9   = 30%
        - nota 10  = 40%

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
    int grade;

    printf("Enter the student's grade : ");
    scanf("%i", &grade);

    if (grade > 10 || grade < 0)
    {
        printf("Grades just between 0-10\n");

        /* Press Enter to exit ... */
        system("read -p 'Press Enter to exit...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

        /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
        return 0; /* return 0, if MAIN function is exectued correctly  */
    }

    switch (grade)
    {
    case 7:
        printf("Loan of 10%%\n");
        break;
    case 8:
        printf("Loan of 20%%\n");
        break;
    case 9:
        printf("Loan of 30%%\n");
        break;
    case 10:
        printf("Loan of 40%%\n");
        break;

    default:
        printf("No loan for this grade \n");
        break;
    }

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