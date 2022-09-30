/* ============================================================================

    Program: Pointer to pointer

    Ponteiros variáveis como outras quaisquer, já vimos que os mesmos encontram-
    se em endereços específicos da memória. Logo, se um ponteiro existe em uma
    posição de memória, podemos utilizar um segundo ponteiro para aponta-lo.
    Esta técnica é conhecida como ponteiros de ponteiros, ou também indireção
    múltipla.

    Em C não existe limite para a indireção múltipla, você pode ter ponteiros
    de ponteiros de ponteiros e assim por diante, de acordo com o número de
    asteriscos usados na declaração.

    ex: float ***p1; => todas estas declaração são válidas
        int ****p2;
        char ****************p3;

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
    setlocale(LC_ALL, "fr_Canada");
    int ****ptr4, ***ptr3, **ptr2, *ptr1, var = 55;

    ptr1 = &var;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;

    printf("----- ****ptr3, ***ptr3, **ptr2, *ptr1, var -----\n");
    printf("var:        %d\n", var);         /* print 55 */
    printf("var:        %p\n", &var);        /* print 55 */
    printf("*ptr1:      %d\n", *ptr1);       /* print 55 */
    printf("&*ptr1:     %p\n", &*ptr1);      /* print 55 */
    printf("**ptr2:     %d\n", **ptr2);      /* print 55 */
    printf("&**ptr2:    %p\n", &**ptr2);     /* print 55 */
    printf("***ptr3:    %d\n", ***ptr3);     /* print 55 */
    printf("&**ptr3:    %p\n", &***ptr3);    /* print 55 */
    printf("****ptr4:   %d\n", ****ptr4);    /* print 55 */
    printf("&****ptr4:  %p\n\n", &****ptr4); /* print 55 */

    *ptr1 = 15;

    printf("----- *ptr1 = 15 -----\n");
    printf("var:        %d\n", var);       /* print 15 */
    printf("var:        %p\n", &var);      /* print 15 */
    printf("*ptr1:      %d\n", *ptr1);     /* print 15 */
    printf("&*ptr1:     %p\n", &*ptr1);    /* print 15 */
    printf("**ptr2:     %d\n", **ptr2);    /* print 15 */
    printf("&**ptr2:    %p\n", &**ptr2);   /* print 15 */
    printf("***ptr3:    %d\n", ***ptr3);   /* print 15 */
    printf("&**ptr3:    %p\n", &***ptr3);  /* print 15 */
    printf("****ptr4:   %d\n", ****ptr4);  /* print 15 */
    printf("&****ptr4:  %p\n", &****ptr4); /* print 15 */

    **ptr2 = 30;

    printf("----- **ptr2 = 25; -----\n");
    printf("var:        %d\n", var);         /* print 30 */
    printf("var:        %p\n", &var);        /* print 30 */
    printf("*ptr1:      %d\n", *ptr1);       /* print 30 */
    printf("&*ptr1:     %p\n", &*ptr1);      /* print 30 */
    printf("**ptr2:     %d\n", **ptr2);      /* print 30 */
    printf("&**ptr2:    %p\n", &**ptr2);     /* print 30 */
    printf("***ptr3:    %d\n", ***ptr3);     /* print 30 */
    printf("&**ptr3:    %p\n", &***ptr3);    /* print 30 */
    printf("****ptr4:   %d\n", ****ptr4);    /* print 30 */
    printf("&****ptr4:  %p\n\n", &****ptr4); /* print 30 */

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
