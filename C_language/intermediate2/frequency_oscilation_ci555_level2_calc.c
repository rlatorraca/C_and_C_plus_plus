/* ============================================================================

    Program: Calcula a frequencia de oscilacao de um oscilador com o circuito
    integrado 555. A funcao deve receber os parametros de entrada :
        - Ra (resistor a);
        - Rb (resistor b) e
        - C (capacitor) e
    Imprimir a frequencia na tela

    f = 1.44 / ((r_a + 2*r_b) * c)

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* --- FUNCTIONS PROTOTYPE --- */
double calc_frequency_oscilation_555(double r_a, double r_b, double c);
double print_frequency_oscilation_555(double r_a, double r_b, double c, double freq);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    double r_a, r_b, c, freq;

    while (1)
    {
        printf("Enter a number Ra (resistor a): ");
        scanf("%lf", &r_a);

        printf("Enter a number Rb (resistor b): ");
        scanf("%lf", &r_b);

        printf("Enter a number C (capacitor)  : ");
        scanf("%lf", &c);

        if (!r_a && !r_b && !c) /* Para verificar se eh ZERO = FALSE*/
            break;

        print_frequency_oscilation_555(r_a, r_b, c, calc_frequency_oscilation_555(r_a, r_b, c));

    } /* END while*/

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

double calc_frequency_oscilation_555(double r_a, double r_b, double c)
{

    return 1.44 / ((r_a + 2 * r_b) * c);

} /* END  print_frequency_oscilation_555 function */

double print_frequency_oscilation_555(double r_a, double r_b, double c, double freq)
{

    printf("\nf = 1.44 / ((%.4lf Ohms+ 2 x %.4lf Ohms) * %.4lf C) = %.4lf Hz\n\n", r_a, r_b, c, freq);

} /* END  print_frequency_oscilation_555 function */

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
