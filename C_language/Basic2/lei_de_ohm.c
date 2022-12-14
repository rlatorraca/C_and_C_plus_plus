/* ============================================================================

    Program: Calcula o valor da corrente que circula por um resisor de 5kOhms alimentado
    por uma tensao de 12V e mostra a notacao cientifica.

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
    float resistor = 5.0e3; /* 5k ohm resistor */
    float voltage = 12.0;   /* 12 volts = tensao*/
    float current = 0.0;

    current = voltage / resistor; /* Ohm Law */

    printf("[Cientific] I = %.1f / %.0f = %.4e A\n", voltage, resistor, current);
    printf("[Float]     I = %.1f / %.0f = %.4f A\n\n", voltage, resistor, current);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

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