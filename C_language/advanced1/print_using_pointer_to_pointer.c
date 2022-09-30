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
/* --- FUNCTION PROTOTYPE --- */
void print_matrix(char **m, int n);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    // ~ matriz[3][50]
    char *matrix[] = {"[*] phrase 1", "[*] phrase 2", "[*] phrase 3"}; /* vetor de strings */

    print_matrix(matrix, 3); /*Chama funcao para imprimir matrix*/

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */
void print_matrix(char **m, int n)
{

    register int i;

    for (i = 0; i < n; i++)
    {
        printf("%s\n", m[i]);
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
