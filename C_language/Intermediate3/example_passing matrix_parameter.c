/* ============================================================================

    Program: Example passing matrix parameter

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
/* --- CONSTANTS --- */
#define axis_x 3
#define axis_y 3

/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPE --- */
void draw_matrix(unsigned short matrix[][axis_y]);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */

int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "en-US");

    unsigned short matrix[axis_x][axis_y] = { 
        {11, 12 , 13},
        {21, 22 , 23},
        {31, 32 , 33}
        };

    draw_matrix(matrix);

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS  --- */

void draw_matrix(unsigned short matrix[][axis_y])
{

    for (unsigned short i = 0; i < axis_x; i++)
    {
        for (unsigned short j = 0; j < axis_y; j++)
        {
            printf("%3hd", matrix[i][j]);
        }
        printf("\n");
    }
}

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