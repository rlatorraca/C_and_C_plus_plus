/* ============================================================================

    Program: Solicita idade e se a pessoa tem carro ou nao, com objetivo de pagar
    beneficios.

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
    /*
        Operadores Relacionais em C:
            a) == (igualdade)
            b) > (maior que)
            c) >= (maior ou igual que)
            d) < (menor que)
            e) <= (menor ou igual que)
            f) != (diferente de)
    */

    char name[20] = "";
    char has_car;
    int age = 0;
    float benefit = 0.0;

    printf("Enter the user first name: ");
    scanf("%19s", name);

    printf("Enter if the user has car [y] Yes or [n] No: ");
    scanf("%s", &has_car);

    printf("Enter the user age: ");
    scanf("%d", &age);

    if ((has_car == 'n' || has_car == 'N') && (age >= 18 && age <= 50))
    {
        benefit = 500;
    }
    else
    {
        benefit = 200;
    }

    printf("\n+++++ %s info +++++ \n", name);
    printf("Age: %d \n", age);
    printf("Has car ?  %c \n", has_car);
    printf("%s is going to get %.2f of benefit\n", name, benefit);

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