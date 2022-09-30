/* ============================================================================

    Program: Sistema lera 4 numeros inteiros positivos e o sistema imprimira o
    resultado:
        a) primeiro numero SOMADO a 1
        b) segundo numero SUBTRAIDO em 1
        c) terceiro numero sera: = ao valor do primeiro numero
        d) quarto numero sera : = terceiro nu,erp segundo numero atualizado
        e) soma de todos envolvidos no processo

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
    unsigned int a, b, c, d, sum;
    unsigned int a_old, b_old, c_old, d_old;

    printf("Enter FIRST number: ");
    scanf("%d", &a);

    printf("Enter SECOND number: ");
    scanf("%d", &b);

    printf("Enter THIRD number: ");
    scanf("%d", &c);

    printf("Enter FOURTH number: ");
    scanf("%d", &d);

    printf("\n\n+++++ RESULTS +++++\n");

    sum = a + b + c + d;
    a_old = a;
    b_old = b;
    c_old = c;
    d_old = d;

    --b;
    d = c + b;
    c = a;
    ++a;

    sum = sum + a + b + c + d;

    printf("First number : %d - output: %d\n", a_old, a);

    printf("Second number : %d - output: %d\n", b_old, b);

    printf("Third number : %d - output: %d\n", c_old, c);

    printf("Fourth number : %d - output: %d\n", d_old, d);

    printf("Sum of all numbers : %d \n", sum);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

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
