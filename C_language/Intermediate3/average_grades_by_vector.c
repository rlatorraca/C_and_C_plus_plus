/* ============================================================================

    Program: Usando vetores entra-se os valores de 4 notas para apresentar o resultado
    de um media aritmetica simples.

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ---- CONSTANTS ---- */

#define quantity_grades 4

/* ---- FUNCTIONS PROTOTYPES ---- */

float print_average(float grades[]);
float calc_average(float grades[]);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    float grades[quantity_grades] = {0.0};

    for (short i = 0; i < quantity_grades; i++)
    {
        
        printf("Enter a grade [%d] between 0-10 : ", i + 1);
        scanf("%f", &grades[i]);
    }

    print_average(grades);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ---- FUNCTIONS ---- */

float print_average(float grades[])
{
    printf("\nAverage for grades [");
    for (short i = 0; i < quantity_grades; i++)
    {
        if (i == 0)
        {
            printf("%.2f", grades[i]);
        }
        else if (i == quantity_grades - 1)
        {
            printf(", %.2f] ", grades[quantity_grades - 1]);
        }
        else
        {
            printf(", %.2f ", grades[i]);
        }
    }
    printf("is : %.2f\n", calc_average(grades));
}

float calc_average(float grades[])
{

    float grades_sum = 0.0;
    for (short i = 0; i < quantity_grades; i++)
    {
        grades_sum += grades[i];
    }

    return grades_sum / quantity_grades;
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
