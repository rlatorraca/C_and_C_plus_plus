/* ============================================================================

    Program: Cria um programa para fazer com que um vetor de inteiros imprima
    valores em determinado intervaloe

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ---- CONSTANTS ----*/
#define size_array 100

/* ---- FUNCTIONS PROTOTYPES ----*/
int calc_interval(int index, int interval);
void print_vetores(int vetor[]);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    int vetor[size_array] = {1, 3, 5, 7};

    for (short index = 0; index < size_array; index++)
    {
        vetor[index] = calc_interval(index, 5);
    }

    print_vetores(vetor);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ----- FUNCTIONS ----- */
int calc_interval(int index, int interval)
{
    return interval * index;
}

void print_vetores(int vetor[])
{

    for (short i = 0; i < size_array; i++)
    {
        printf("Vetor[%3d] = %3d\n", i + 1, vetor[i]);
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
