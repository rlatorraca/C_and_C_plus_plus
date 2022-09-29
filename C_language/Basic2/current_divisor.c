/* ============================================================================

    Program : alcula um divisor de tensao formado por R1 = 10k Ohm, R2 = 2K Ohm
    e com 15V de tensao de entrada

    Equacao do divisor => Vout = (R2 / (R2 + R1)) * Vin

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
    float R1 = 10.0e3,
          R2 = 2.0e3,
          Vin = 15.0,
          Vout; /* Tensao de saida de um divisor de tensao*/

    Vout = (R2 / (R2 + R1)) * Vin;

    printf("Vout = (%.0f / (%.0f + %.0f)) * %.1f = %.2f Volts\n\n", R2, R2, R1, Vin, Vout);

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

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