/* ============================================================================

    Program: Solicita o valor da tensao (V) e da resistencia Ohms (R). E, onde,
    existira um menu com 3 opcoes de calculos:
        1) Corrente que circula pelo resistor: I = (V/R)

        2) Potencia dissipada no resistor: P = I * V

        3) Valor de tensao para um corrente de 100 mA: V = 0.1 * R

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
    float voltage = 0.0, resistence = 0.0, dissipated_power = 0.0, current = 0.0;
    int operator;

    printf("[1] - Current flowing through the resistor.\n");
    printf("[2] - Power dissipated in the resistor.\n");
    printf("[3] - Voltage value for a current of 100mA.\n");
    printf("Enter you option:\n");
    scanf("%d", &operator);

    if (operator<3)
    {
        printf("Enter [V]oltage value: ");
        scanf("%f", &voltage);
    } 
    
    if(operator < 4){
        printf("Enter [R]esistence value: ");
        scanf("%f", &resistence);
    }

    

    if (operator== 1)
    {
        printf("\nResult: I = (V/R) = %.2f / %.2f = %.2f\n\n", voltage, resistence, voltage / resistence);
    }
    else if (operator== 2)
    {
        printf("\nResult: P = I * V = %.2f * %.2f = %.2f\n\n", (voltage / resistence), voltage, ((voltage / resistence) * voltage));
    }
    else if (operator== 3)
    {
        printf("\nResult: V = 0.1 * R = 0.1 * %.2f = %.2f\n\n", resistence, 0.1 * resistence);
    }
    else
    {
        printf("\nInvalid Option\n");
    }

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