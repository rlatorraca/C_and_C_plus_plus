/* ============================================================================

    Program: Examples of FUNCTIONS and PROCEDURES
    Imprime o painel abaixo com o numero digitado:
    ====================;
    +  N U M B E R %d  +;
    ====================;

        Ex: dataType name (parameters);

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* --- FUNCTIONS PROTOTYPE --- */
void printBox(int number);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{

    setlocale(LC_ALL, "fr_Canada");

    unsigned number;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        printBox(number);

        if (!number) /* Para verificar se eh ZERO = FALSE*/
            break;

    } /* END while*/

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

void printBox(int number)
{
    printf("\n====================\n");
    printf("+  N U M B E R %d  +", number);
    printf("\n====================\n\n");

} /* END  asteriscos function */

void hashtags()
{
    for (unsigned i = 0; i < 10; i++)
        printf("#");
    printf("\n");

} /* END  hashtags function */

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
