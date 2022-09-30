/* ============================================================================

    Program: Mascara de bits

    A operação XOR também pode ser entendida como de “inversão controlada”,
    uma vez que podemos utilizá-la para inverter bits pontuais em um determinado
    byte.

    Vamos supor que desejamos inverter apenas o bit 2 de um determinado byte,
    sem afetar o conteúdo dos demais bits. O código abaico ilustra como isso
    pode ser feito.

    Sempre que você desejar inverter um único bit, utilize uma máscara XOR onde
    os bits em que se deseja a inversão devem estar em 1. Por exemplo se usarmos
    amascara 04h, que em binário é igual a 00000100, em outras palavras, o bit 2
    está com valor 1 e é este que será invertido.

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

void print_bin_AND( unsigned char reg);
void print_bin_OR(unsigned char *word, unsigned char reg);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{
    unsigned char reg = 0xAB;

    printf("\n%X  %8b\n",reg, reg);
    printf("reg: ");
    print_bin_AND(reg); /* reg: 10101011 */

    reg ^= 0x04; /*reg = reg ^ 00000100 */ /* INVERTE o bit numero 3*/

    printf("\n%X  %08b\n",reg, reg);
    printf("reg: ");
    print_bin_AND(reg); /* reg: 10101111 */


    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */
void print_bin_AND(unsigned char reg)
{

    for(register int i=7;i>=0;i--) {
        (reg >> i) & 1 ? putchar('1') : putchar('0');
    }
    printf(" bits\n");
}

void print_bin_OR(unsigned char *word, unsigned char reg)
{


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

