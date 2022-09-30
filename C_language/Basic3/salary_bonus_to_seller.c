/* ============================================================================

    Program: Programa adiciona 10% ao salario de um vendedor, caso o vendedor
    venda mais de $ 10.000,00 no mes.

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

    float salary = 0, sales = 0;
    char name[20] = "";
    int percentual = 0;

    printf("Enter seller's first name: ");
    scanf("%19s", name);

    printf("Enter %s's salary: ", name);
    scanf("%f", &salary);

    printf("Enter total of sales for %s [$] :", name);
    scanf("%f", &sales);

    /* Not using IF/ELSEIF / ELSE  => so, Top to bottom conditions made*/

    if (sales > 50000)
    {
        salary = salary * 1.30;
        percentual = 30;
    }
    else if (sales > 30000)
    {
        salary = salary * 1.25;
        percentual = 25;
    }
    else if (sales > 20000)
    {
        salary = salary * 1.15;
        percentual = 15;
    }
    else if (sales > 10000)
    {
        salary = salary * 1.10;
        percentual = 10;
    }

    printf("%s's total salary is [after %d%% increase]: $%.2f\n", name, percentual, salary);

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