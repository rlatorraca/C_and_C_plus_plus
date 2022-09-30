/* ============================================================================

    Program: Example of Keyboard Input

        Keyboard Input => scanf("", &)
        - inputs

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
        scanf() => le a informacao que foi entrada no console (pelo keyboard)

        scanf("Formato do dado a ser lido", &variavel a ser carregada)
        a) Tipo de formato de dado a ser lidor permite 3 tipos de caracteres:
            a.1) Especificadores de formato;
            a.2) Caracteres de espaco em branco;
            a.3) Caracteres diferentes de espaco em branco


        b) Presente na biblioteca stdio.h, e devemos utilizar o % para os diferentes formatos:
            %c       => 1 caracter
            %d ou %i => inteiro decimal
            %f       => float / double
            %e       => float / double (cientifico)
            %u       => unsigned
            %s       => string
            %%       => simbolo de percentagem

        c) Os caracteres sao salvos no BUFFER do KEYBOARD


    */
    char char_atribute1, char_atribute2;

    printf("Enter a character 01, please : ");
    scanf("%c", &char_atribute1);

    printf("Enter a character 02, please : ");
    scanf(" %c", &char_atribute2);

    printf("The characteres are : a)%c and b) %c\n ", char_atribute1, char_atribute2);
    /* Para nao ter ERROR devemos dar espaco ANTES do Segundo %c para entrar ambos os caracteres*/

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]' key"); /* PAUSE Exceution - LINUX*/

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