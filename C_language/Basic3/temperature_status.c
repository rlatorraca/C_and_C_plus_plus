/* ============================================================================

    Program: Temperature Status. Le a temperatura e se esta for superior a
    30 Celsius, o status resulta em HIGH 'H', se for igual ou inferior, o
    status resulta em LOW 'L'

        Condition ? result TRUE : result FALSE ;

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
    float temperature = 0;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("Temperature Status : %c\n", temperature > 30 ? 'H' : 'L');

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
===============================================================================*/