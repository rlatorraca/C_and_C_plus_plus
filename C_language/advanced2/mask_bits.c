/* ============================================================================

    Program: Mascara de bits

    Os operadores bit a bit podem ser utilizados no conceito de máscara de bits.
    Basicamente, aplicamos eles quando desejamos preservar/remover, concatenar
    ou inverter bits pontuais.

    Para preservar/remover, utilize o operador AND (&). Pelo fato da lógica E
    sempre resultar em 0 quando uma das entradas for 0, utilizaremos 1 quando o
    desejo for preservar determinado bit e 0 quando o desejo for remover.

    Observe que o código do Box 5 requer o suporte da função print_bin_AND
    para vermos cada bit dos bytes envolvidos. Salientamos também que é possível
    de se utilizar o C reduzido com os operadores bit a bit, a linha

        registro1 &= 0xF0;

    Poderia ser escrita assim:

        registro1 = registro1 & 0xF0;

    O operador OU ( | ) é aplicável quando desejamos concatenar dois bytes.
    Vamos supor que queremos reunir em um único byte o nibble menos de um
    determinado byte com o mais significativo de outro.

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

void print_bin_AND(unsigned char *word, unsigned char reg);
void print_bin_OR(unsigned char *word, unsigned char reg);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{
    unsigned char register1 = 0xAD;
    unsigned char register2 = 0x8C;
    unsigned char register3;

    printf("///////////////////////////////////////////\n");
    printf("||| ------ MASK print_bin_AND  -----   |||\n");
    printf("|||  [preservar os bits de interesse]  |||\n");
    printf("///////////////////////////////////////////\n");
    printf("\nRegister 1\t\t\t\t\t: %08b\n", register1);
    print_bin_AND("before Mask 0xF0", register1);        /* 10101101 bits */
    register1 &= 0xF0;                                        /* preserva os 4 bits mais significativos*/
    print_bin_AND("after Mask 0xF0",register1);          /* 10100000 */
    printf("+++++++++++++++++++++++++++++++++++++++++++++ ");
    register1 = 0xAD;
    printf("\nRegister 1\t\t\t\t\t: %08b\n", register1);
    print_bin_AND("before Mask 0x0F", register1);        /* 00110010 bits */
    register1 &= 0x0F;                                        /* preserva os 4 bits mais significativos*/
    print_bin_AND("after Mask 0x0F",register1);          /* 00110000b */

    printf("\n////////////////////////////////////\n");
    printf("||| ------  print_bin_OR  -----  |||\n");
    printf("|||     [Concatena os bits]      |||\n");
    printf("////////////////////////////////////\n\n");
    register1 = 0xAD;
    register1 &= 0xF0;
    register2 = 0x8C;
    register2 &= 0x0F;
    print_bin_OR("before Mask 0xF0 em register1 ", register1);
    print_bin_OR("before Mask 0x0F em register2 ", register2);
    register3 = register1 | register2;
    print_bin_AND("after register1 | register2 ",register3);

    printf("+++++++++++++++++++++++++++++++++++++++++++++ ");



    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */
void print_bin_AND(unsigned char *word, unsigned char reg)
{


    printf("Mask bits[%s]\t\t: ",word);
    unsigned char register_temp;
    for(register int i=7;i>=0;i--) {
        (reg >> i) & 1 ? putchar('1') : putchar('0');
    }
    printf(" bits\n");
}

void print_bin_OR(unsigned char *word, unsigned char reg)
{


    printf("Mask bits[%s]\t: ",word);

    for(register int i=7;i>=0;i--)
        (reg>>i)&1 ? putchar('1') : putchar('0');

    printf(" bits\n");
}

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
