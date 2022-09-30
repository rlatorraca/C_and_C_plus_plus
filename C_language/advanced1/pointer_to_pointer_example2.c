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
    float a = 10.55, b = 22.77;
    float *pointer01, *pointer02;
    float **general_access;

    pointer01 = &a;
    pointer02 = &b;

    printf("-----  pointer01 = &a; pointer02 = &b;-----\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);
    printf("&a: %p\n", &a);
    printf("&b: %p\n\n", &b);

    printf("*pointer01: %.2f\n", *pointer01);
    printf("*pointer02: %.2f\n", *pointer02);

    printf("&pointer01: %p\n", &pointer01);
    printf("&pointer02: %p\n\n", &pointer02);

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
