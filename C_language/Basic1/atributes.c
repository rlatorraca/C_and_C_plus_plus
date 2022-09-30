/*====================================================================================================================================================
    Program: Example of Attributes in C

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================+========================================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Atributes\n");

    /* ATRIBUTES */

    int var1 = 1, var2 = 20, var3 = 35, var4 = 46; /* 4 bytes*/

    printf("Var1  = %d\n", var1);
    printf("Var2  = %d\n", var2);
    printf("Var3  = %d\n", var3);
    printf("Var4  = %d\n\n", var4);

    printf("var1 || var2 || var3 || var4 = %d || %d || %d || %d\n\n", var1, var2, var3, var4);

    int total = var1 * var2 * var3 * var4;

    var4 = total - 10;

    printf("Total  = %d\n", total);
    printf("Var4 after * (-10)   = %d\n\n", var4);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]' key");

    return 0;
}