/* ============================================================================

    Program: Consiste em um sistema de menus de um cadastro de cliente. O sistema
    deve apresentar as seguintes opcoes:

    [N]ew Customer
    [D]elete Customer
    [L]ist Customers
    [Q]uery Customer
    Q[u]it

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{
    // Set all categories and return "fr_Canada"
    setlocale(LC_ALL, "fr_Canada");

    char option;

    do
    {
        printf("[N]ew Customer\n");
        printf("[D]elete Customer\n");
        printf("[L]ist Customers\n");
        printf("Q[u]ery Customer\n");
        printf("[Q]uit\n");
        printf("Option:");
        scanf(" %c", &option);

        system("clear"); /* LIMPA a tela*/

        switch (option)
        {
        case 'n':
        case 'N':
            printf("Menu New Customer\n\n");
            break;

        case 'd':
        case 'D':
            printf("Menu Delete Customer\n\n");
            break;

        case 'l':
        case 'L':
            printf("Menu List Customers\n\n");
            break;

        case 'u':
        case 'U':
            printf("Menu Query Customers\n\n");
            break;

        case 'q':
        case 'Q':
            printf("Quit\n\n");
            break;

        default:
            printf("Invalid choice\n\n");
            break;
        }
    } while (option != 'q' && option != 'Q');

    puts("+++++ PROGRAM CLOSED +++++");

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