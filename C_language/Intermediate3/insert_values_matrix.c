/* ============================================================================

    Program: Print matrix and enter line and column value for a 4x6 matrix table
        - Possiveis valores: entre 0 e 999
        - Coluna de 4 x 6

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
#define axis_x 4
#define axis_y 6

/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPE --- */
void print_table_on_screen(unsigned short matrix[][axis_y]);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    unsigned short line = 0;
    unsigned short column = 0;
    unsigned short value = 0;

    unsigned short matrix[axis_x][axis_y] = {
        {11, 12, 13},
        {21, 22, 23},
        {31, 32, 33}};

    print_table_on_screen(matrix);
    while (line != 9999 && column != 9999)
    {
        printf("Enter LINE [1-4]: ");
        scanf("%hd", &line);

        printf("Enter COLUMN [1-6]: ");
        scanf("%hd", &column);

        if ((line < 5 && line > 0) && (column < 7 && column > 0))
        {
            printf("Enter Value [0-999]: ");
            scanf("%hd", &value);

            if (value > -1 && value < 1000)
            {
                matrix[line - 1][column - 1] = value;
                system("clear");
                print_table_on_screen(matrix);
            }
            else if (value == 9999)
            {
                system("clear");
                break;
            }
        }
        else
        {
            system("clear");
            print_table_on_screen(matrix);
        }
    }

    print_table_on_screen(matrix);

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */
void print_table_on_screen(unsigned short matrix[][axis_y])
{

    for (unsigned char i = 0; i < axis_x; i++)
    {
        printf("------------------------------------------\n");
        printf("| %3d  | %3d  | %3d  | %3d  | %3d  | %3d  |\n", matrix[i][0],
               matrix[i][1],
               matrix[i][2],
               matrix[i][3],
               matrix[i][4],
               matrix[i][5]);

        if (i == axis_x - 1)
        {
            printf("------------------------------------------\n");
        }
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
