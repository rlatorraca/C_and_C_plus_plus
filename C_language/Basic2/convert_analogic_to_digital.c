/* ============================================================================

    Program: Programa que le a tensao de um conversor digital/analogico de 0 a 5V e 10 bits
    e imprime no console.

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
    int value_ADC;
    float voltage;

    printf("Enter ADC value between 0 and 1023: ");
    scanf("%d", &value_ADC);

    voltage = (value_ADC * 5 / 1023);
    printf("Voltage read is [No casting + Value in Int]: %.2fV\n", voltage);

    voltage = (value_ADC * 5.0 / 1023.0);
    printf("Voltage read is [No casting + Value in Float]: %.2fV\n", voltage);

    voltage = (float)(value_ADC * 5.0 / 1023.0);
    printf("Voltage read is [Casting]: %.2fV\n", voltage);

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
