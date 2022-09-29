/* ============================================================================

    Program: Example of Logical Values

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
        Basic Types in C (ANSI) : CHAR, INT, FLOAT, DOUBLE
            - nao existe TRUE or FALSE (1 bit), mas existirao compiladores que aceitem a
            declaracao de uma variavel do tipo boolean / bool / bit, para amarzenar 0 ou 1
            - Alem disso pode-se QUEBRAR variaveis de 8 bits (para ler bits
            individualmente)

        Em C, o VALOR LOGICO  = FALSE, sempre sera o ZERO (0)
            - qualquer coisa diferente sera considerado VERDADEIRO (inclusivo Negativos`)

    */

    printf("Result = %d [0 = False / Other values = True]\n", 10 == 34);
    printf("Result = %d [0 = False / Other values = True]\n", 10 == 10);
    printf("Result = %d [0 = False / Other values = True]\n", 10 == 10.0);
    printf("Result = %d [0 = False / Other values = True]\n\n", 10.0 == 10);

    int var = 0;
    printf("Result = %d [0 = False / Other values = True]\n", var = 10);
    printf("Result = %d [0 = False / Other values = True]\n", var == 10);
    printf("Result = %d [0 = False / Other values = True]\n", var == 0);

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