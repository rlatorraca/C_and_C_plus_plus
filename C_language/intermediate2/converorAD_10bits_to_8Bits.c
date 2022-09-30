/* ============================================================================

    Program: Um processador tem um conversor AD de 10 bits, portanto o range
    vai de 0 -1023. Implemente uma funcao que receba um valor de 0 - 1023 e
    retorne um valore linearmente proporcional para 8 bits, isto é, de 0 a 255.

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
int converterAD_1023_to_255(unsigned value);
void error_func();

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{

    setlocale(LC_ALL, "fr_Canada");

    unsigned value;

    while (1)
    {
        printf("Enter a value [0 - 1023] to be converted: ");
        scanf("%d", &value);
        if (value > 1023 || value < 0)
        {
            error_func();
            continue;
        }

        if (value == 9999) /* Para verificar se eh ZERO = FALSE*/
            break;

        printf("Convert AD %d is => %d\n\n", value, converterAD_1023_to_255(value));

    } /* END while*/

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

int converterAD_1023_to_255(unsigned value)
{
    short max = 1023;
    short min = 0;

    return (value * 255) / 1023;

} /* END  print_div_and_rest function */

void error_func()
{
    printf("ERROR : just accepted values between 0 - 1023\n\n");
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
