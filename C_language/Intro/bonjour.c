/*====================================================================================================================================================
    Program: Intro in C

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================+========================================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Bonjour Monde\n");

    /* MATH OPERATION */

    printf("Result of 10 + 10 : %d\n", 10 + 10);
    printf("Result of 10 - 1 : %d\n", 10 - 1);
    printf("Result of 10 * 10 : %d\n", 10 * 10);
    printf("Result of 10 / 1 : %d\n\n", 10 / 10);

    printf("Result of 16 + 8 / 2 : %d\n", 16 + 8 / 2);
    printf("Result of (16 + 8) / 2 : %d\n", (16 + 8) / 2);
    printf("Result of 16 / 8 + 2 : %d\n", 16 / 8 + 2);
    printf("Result of 16 * 8 / 2 : %d\n", 16 * 8 / 2);
    printf("Result of 16 / 8 * 2: %d\n\n", 16 / 8 * 2);

    printf("Result of 25 + 5 * 2 / 5 : %d\n", 25 + 5 * 2 / 5);
    printf("Result of (25 + 5) * 2 / 5 : %d\n\n", (25 + 5) * 2 / 5);
    printf("Result of ((25 + 5) * 2) / 5 : %d\n\n", (25 + 5) * 2 / 5);

    printf("Calculus done !!! \n");

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]' key");

    return 0;
}