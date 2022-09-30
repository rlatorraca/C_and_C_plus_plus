/* ============================================================================

    Program: Bit fields

    Os campos de bits são uma extensão das funcionalidades das estruturas em C e sua
    aplicação se dá quando desejamos mapear registradores em microcontroladores
    ou mesmo ter informações de um único bit em nosso código. No Box 8 vemos a
    sintaxe da declaração de um campo de bits.

        struct reg
        {
        unsigned nome : tamanho_em_bits;
        unsigned nome : tamanho_em_bits;
        .
        .
        .
        } register;

    Utilizamos a palavra reservada struct e dentro dela o tipo unsigned é aplicado,
    pois os bits devem ser sem sinal. Após, definimos um nome, seguindo as regras
    de sempre e em seguida o operador dois-pontos (:). À direita dos dois-pontos,
    definimos o tamanho em bits. Apresentamos o exemplo de um registrador
    de 8 bits, que poderão ser acessados pelo usuário.

    Em alguns compiladores, o primeiro bit (no nosso caso po0) é o menos significativo,
    mas isso não é uma regra. É conveniente que você mesmo defina esta ordem quando
    for utilizar os bits do campo de bits. Quando o tamanho for de apenas 1 bit,
    obviamente você só poderá armazenar 0 ou 1. Para acessar, utilize o operador
    ponto ( . ), tal como é praticável com estruturas convencionais.

    Utilizando os operadores << e | podemos combinar todos os bits e armazenar em
    uma variável de 8 bits. Inicializamos po0 e po6 com 1. Por padrão, os bits não
    inicializados recebem o valor 0, portanto teremos 01000001b. Será armazenado
    41h em outp.

    Também é possível declarar registradores com alguns bits não implementados, vamos
    supor um registrador de UART, que conterá apenas os bits RX, TX e mais 2 bits
    para determinar os bits por segundo da transmissão. Teremos 4 bits ociosos e
    podemos escolher não implementá-los.

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
struct out
{
    unsigned po0 : 1; /* 1 bit de espaco*/
    unsigned po1 : 1;
    unsigned po2 : 1;
    unsigned po3 : 1;
    unsigned po4 : 1;
    unsigned po5 : 1;
    unsigned po6 : 1;
    unsigned po7 : 1;
} PORT;

struct reg
{
    unsigned empty   : 4; /* 4 bits não implementados */
    unsigned RX     : 1;
    unsigned TX     : 1;
    unsigned bps    : 2;

} UART;

struct sensor
{
    float analog;
    short digital;
    unsigned ready : 1;
} LIGHT;
/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPES --- */


/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{
    unsigned char reg = 0xAB;

    unsigned char outp;
    unsigned char uartp;
    unsigned char ligthp;

    PORT.po0 = 1;
    PORT.po6 = 1;


    UART.empty = 1000;
    UART.RX = 1;
    UART.bps = 01;


    uartp = UART.empty  << 3  |
            UART.RX     << 4  | /*  | => server para conctanar a formatar os valores*/
            UART.TX     << 5  |
            UART.bps    << 6 ;


    outp = PORT.po0       |    /*  | => server para conctanar a formatar os valores*/
           PORT.po1 << 1  |
           PORT.po2 << 2  |
           PORT.po3 << 3  |
           PORT.po4 << 4  |
           PORT.po5 << 5  |
           PORT.po6 << 6  |
           PORT.po7 << 7;

    printf("UART: 0x%X hexadecimal - %08b bits\n",uartp, uartp);
    printf("OUT : 0x%X hexadecimal - %08b bits\n",outp, outp);



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

