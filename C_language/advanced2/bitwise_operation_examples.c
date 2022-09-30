/* ============================================================================

    Program: Bitwise Operation

    Operador                      Descrição
       ~        Inversão de bits, complementa todos os bits, o que é

       0        Vira 1 e o que é 1 vira 0.

      >>        Deslocamento à direita (shift right).
                Desloca todos os bits para direita, de acordo com o número utilizado.

      <<        Deslocamento à esquerda (shift left). Desloca todos os bits para esquerda,
                de acordo com o número utilizado.

      &         Operação E (AND) bit a bit.

      ^         Operação OU-Exclusivo (XOR) bit a bit.

      |         Operação OU (OR) bit a bit.


    Os operadores aparecem na ordem de precedência para expressões, sendo o ~
    o de maior precedência e o | o de menor

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* ========================================================================= */
/* --- CONSTANTS --- */

/* ========================================================================= */
/* --- MACROS --- */

/* ========================================================================= */
/* --- STRUCTS || UNIONS --- */

/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPES --- */



/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{
    unsigned char register1 = 0x48; /* reg1: 01001000 bits */
    unsigned char register2;

    unsigned char register3 = 0x35; /* reg3: 00110101 bits */
    unsigned char register4;
    unsigned char register5;

    unsigned char register6 = 0xC3; /* reg2: 01101011b */
    unsigned char register7 = 0x6B;
    unsigned char register8;
    unsigned char register9;
    unsigned char register10;

    register2 = ~register1;         /* reg1: 10110111 bits */

    register4 = register3 >> 1;     /* reg4: 00011010 bits */
    register5 = register3 << 2;     /* reg5: 11010100 bits */

    register8 = register6 & register7;    /* reg8:  01000011 bits */
    register9 = register6 ^ register7;    /* reg9:  10101000 bits */
    register10 = register6 | register7;   /* reg10: 11101011 bits */


/* reg4: 10101000b */
/* reg5: 11101011b */


    printf("register 1: %.2x\n", register1);
    printf("register 2: %.2x\n", register2);
    printf("register 1: %p\n", register1);
    printf("register 2: %p\n", register2);
    printf("register 1: %08b\n", register1);
    printf("register 2: %08b\n\n\n", register2);

    printf("register 3                  : %.2x\n", register3);
    printf("register 3                  : %p\n", register3);
    printf("register 4[register3 >>1]   : %p\n", register4);
    printf("register 5[register3 <<2]   : %p\n", register5);
    printf("register 3                  : %08b\n", register3);
    printf("register 4[register3 >>1]   : %08b\n", register4);
    printf("register 5[register 3<<2]   : %08b\n\n\n", register5);

    printf("register 6                          : %p\n", register6);
    printf("register 7                          : %p\n", register7);
    printf("register 6                          : %08b\n", register6);
    printf("register 7                          : %08b\n\n", register7);


    printf("(AND) bit a bit\n");
    printf("register 6                          : %08b\n", register6);
    printf("register 7                          : %08b\n", register7);
    printf("register 8  [register6 & register7] : %p\n", register8);
    printf("register 8  [register6 & register7] : %08b\n\n", register8);

    printf("OU-Exclusivo (XOR) bit a bit\n");
    printf("So, - TRUE = input True are ODD (impar)\n");
    printf("    - False = inputs True are EVEN (par) \n");
    printf("register 6                          : %08b\n", register6);
    printf("register 7                          : %08b\n", register7);
    printf("register 9  [register6 ^ register7] : %p\n", register9);
    printf("register 9  [register6 ^ register7] : %08b\n\n", register9);

    printf("OU (OR) bit a bit\n");
    printf("register 6                          : %08b\n", register6);
    printf("register 7                          : %08b\n", register7);
    printf("register 10 [register6 | register7] : %p\n", register10);
    printf("register 10 [register6 | register7] : %08b\n\n\n", register10);

    printf("register1 : %08b\n", 0x43);
    putchar('\t');
    putchar('\t');
    putchar('\t');
    for(register int i=7;i>=0;i--)
        (0x43>>i)&1 ? putchar('1') : putchar('0');

    putchar('\n');



    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

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

