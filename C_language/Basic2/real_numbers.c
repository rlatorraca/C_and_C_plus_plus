/* ============================================================================

    Program: Example of REAL NUMBERS

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

    /*
        FLOAT           [ 3.4e-38   <-> 3.4e+38   ]
        DOUBLE          [ 1.7e-308  <-> 1.7e+308  ]
        LONG DOUBLE     [ 3.4e-4932 <-> 3.4e+4982 ]
    */

    /*
         FORMATO PARA AJUSTE DE PRECISAO =>  %f (para imprimir float)
            - ex: 2 casas (apos virgulga) => %.2f
                printf(%.2f, value);
    */

    float amplitude = 9.000; /* 4 bytes => ate 6 casa de precisao apos a virgula */

    double resolution = 0.00000002; /* 8 bytes => ate 10 a 15 casas de precisao apos a virgula*/

    float pi_float = 3.14159265358979323846;
    double pi_double = 3.14159265358979323846;
    float r = 4.343,
          h = 6.343;

    double area_circ_float = pi_float * r * r;
    double area_circ_double = pi_double * r * r;

    double vol_cilin_float = pi_float * r * r * h;
    double vol_cilin_double = pi_double * r * r * h;

    printf("Circunference area FLOAT  [10 precision]: %.10f\n", area_circ_float);
    printf("Circunference area DOUBLE [10 precision]: %.10f\n\n", area_circ_double);

    printf("Circunference area FLOAT  [15 precision]: %.15f\n", area_circ_float);
    printf("Circunference area DOUBLE [15 precision]: %.15f\n\n", area_circ_double);

    printf("Cylinder Volume FLOAT  [10 precision]: %.10f\n", vol_cilin_float);
    printf("Cylinder Volume DOUBLE [10 precision]: %.10f\n\n", vol_cilin_double);

    printf("Cylinder Volume FLOAT  [15 precision]: %.15f\n", vol_cilin_float);
    printf("Cylinder Volume DOUBLE [15 precision]: %.15f\n\n", vol_cilin_double);

    /* +++++++++++++++++++++++++++++++++++ */
    /* +++ Press Enter to continue ... +++ */
    /* +++++++++++++++++++++++++++++++++++ */
    system("read -p 'Press Enter to continue...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

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
