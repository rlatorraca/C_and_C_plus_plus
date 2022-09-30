/* ============================================================================

    Program: Arithimetic Pointers

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    // Set all categories and return "en-US"
    setlocale(LC_ALL, "en-US");

    short var_short = 10;    /* variável de 2 bytes (short int), long and float (4 bytes), double (8bytes), char 1 byte */
    short *ptr_short = NULL; /* ponteiro para short int */

    long var_long = 200; /* long 8 bytes*/
    long *ptr_long = NULL;

    double var_double = 456.77; /* double 8 bytes*/
    double *ptr_double = NULL;

    int var_int = 713;
    int *ptr_int = NULL;

    ptr_short = &var_short; /* ptr_short aponta para o endereço de var_short */

    ptr_long = &var_long; /* ptr_short aponta para o endereço de var_long */

    ptr_double = &var_double; /* ptr_short aponta para o endereço de var_double */

    ptr_int = &var_int; /* ptr_short aponta para o endereço de var_int */

    printf("++++ SHORT = %ld bytes +++++\n", sizeof(var_short));
    printf("&var   : %p\n", &var_short); /* endereço de var */
    printf("ptr    : %p\n", ptr_short);  /* endereço de var */

    ptr_short++; /* incrementa ptr */
    printf("ptr (after ptr++): %p\n", ptr_short);

    ptr_short--;                                                                                  /* decrementa ptr */
    printf("ptr (after ptr--): %p\n", ptr_short); /* endereço 2 bytes acima do endereço de var */ /* endereço de var */
    ptr_short--;                                                                                  /* decrementa ptr */

    printf("ptr (after ptr--): %p\n", ptr_short); /* endereço 2 bytes abaixo do endereço de var */

    printf("\n++++ LONG = %ld bytes +++++\n", sizeof(var_long));
    printf("&var_long   : %p\n", &var_long);
    printf("ptr_long    : %p\n", ptr_long);

    ptr_long++; /* incrementa ptr */
    printf("ptr_long (after ptr_long++): %p\n", ptr_long);

    ptr_long--;
    printf("ptr_long (after ptr_long--): %p\n", ptr_long);
    ptr_long--;

    printf("ptr_long (after ptr_long--): %p\n", ptr_long);

    printf("\n++++ DOUBLE = %ld bytes +++++\n", sizeof(var_double));
    printf("&var_double   : %p\n", &var_double);
    printf("ptr_double    : %p\n", ptr_double);

    ptr_double++; /* incrementa ptr */
    printf("ptr_double (after ptr_double++): %p\n", ptr_double);

    ptr_double--;
    printf("ptr_double (after ptr_double--): %p\n", ptr_double);
    ptr_double -= 1;

    printf("ptr_long (after ptr_double--): %p\n", ptr_double);

    printf("\n++++ INT = %ld bytes +++++\n", sizeof(var_int));
    printf("&var_int   : %p\n", &var_int);
    printf("ptr_int    : %p\n", ptr_int);

    ptr_int++; /* incrementa ptr */
    printf("ptr_int (after ptr_int++): %p\n", ptr_int);

    ptr_int--;
    printf("ptr_doubptr_intle (after ptr_int--): %p\n", ptr_int);
    ptr_int--;

    printf("ptr_int (after ptr_double--): %p\n", ptr_int);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

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
