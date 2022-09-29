/* ============================================================================

    Program: Examples Logical Operators

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
        C tem 3 operadores loogicos:
        a) &&   (AND logico)
            => Todas as condicoes devem ser True para a expressao ser TRUE
            & (e um operacao Bit a Bit)

        b) ||   (OR logico)
            => pelo menoa 1 condicao True, para a expressao ser TRUE

        c) !    (NOT logico)
            => a condicao avaliada deve ser False, para entao esta ter o resultado TRUE
    */

    /*
             NAO EXISTE => OU Exclusivo em C (XOR) => Deve ser construidco . Examplo abaixo

             Numero de entradas verdadeiera precisa ser IMPAR no XOr

    */

    /*
         PRECEDENCIAS DE OPERADORES em C (Maior pro menor)
             !
             >   >=  <   <=
             ==  !=
             &&
             ||


    */

    int operatorA, operatorB, xOR;

    printf("Enter operator A : ");
    scanf("%d", &operatorA);

    printf("Enter operator B : ");
    scanf("%d", &operatorB);

    xOR = (operatorA || operatorB) && !(operatorA && operatorB);

    printf("%d XOR %d = %d\n\n", operatorA, operatorB, xOR);

    printf("+++++ Testing Operators precedence +++++");
    printf("[ 0 = FALSE; 1 = TRUE ]\nExpression: 15>11 && 8,4 || 7>=2\nResult: %d\n", (15 > 11 && 8, 4 || 7 >= 2));

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
