/* ============================================================================

    Program: Imprime o valor da frequencia de corte de um filtro passa-baixas,
    onde o usuario entrara com os parametros:
        R, C, 'A'
        f = 1 / (2*pi*R*C)

    A mesma funcao devera calcular e imprimir na tela o valor da constante de tempo
    resultado do produto R e C, caso o usuario entre com RE, C e 'B'. A equacao
    a seguir:
        t = E*C

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
void print_frequency_low_pass_filter_and_time_constant(double r, double c, int type);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{

    setlocale(LC_ALL, "fr_Canada");

    double r, c;
    char type;

    while (1)
    {
        printf("Enter a number R (resistor): ");
        scanf("%lf", &r);

        printf("Enter a number C (capacitor): ");
        scanf("%lf", &c);

        printf("Enter a [A] Frequency low-pass filter or [B] Time constant: ");
        scanf("%c", &type);

        if (!r && !c) /* Para verificar se eh ZERO = FALSE*/
            break;

        print_frequency_low_pass_filter_and_time_constant(r, c, type);

    } /* END while*/

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

void print_frequency_low_pass_filter_and_time_constant(double r, double c, int type)
{
    double pi = 3.14159;
    double freq = 1 / (2 * pi * r * c);
    double temp = r * c;

    switch (type)
    {
    case 'a':
    case 'A':
        printf("\nf = 1 / (2 * %lf * %.4lf Ohms * %.4lf C) = %.6lf Hz\n\n", pi, r, c, freq);
        break;
    case 'b':
    case 'B':
        printf("\nt = %.6lf Ohms * %.6lf C) = %.6lf s\n\n", r, c, temp);
        break;

    default:
        break;
    }

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
