/* ============================================================================

    Program: Simples menu exemplo

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
        printf("[a] Menu AIR Canada\n");
        printf("[b] Menu DELTA Airlines\n");
        printf("[c] Menu AEROLINEAS Argentina\n");
        printf("[d] Menu LAN Airlines\n");
        printf("[q] Quit\n");
        printf("Option:");
        scanf(" %c", &option);

        system("clear"); /* LIMPA a tela*/

        switch (option)
        {
        case 'a':
        case 'A':
            printf("Menu AIR Canada\\n\n");
            break;

        case 'b':
        case 'B':
            printf("Menu DELTA Airlines\n\n");
            break;

        case 'c':
        case 'C':
            printf("Menu AEROLINEAS Argentina\n\n");
            break;

        case 'd':
        case 'D':
            printf("Menu LAN Airlines\n\n");
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
