/* ============================================================================

    Program: Processador deve receber diversos bytes e realizar uma conversao
    criptografada dos dados. A criptografia sera somar 5 aos elementos pares do
    vetor e subtrair dos elementos impares. (valores em hexadecimal)

    Ex: Entrada:    0xA0    0x73    0x25    0xD3    0xCA    0xFE
        Saida:      0xA5    0x70    0x22    0xD0    0xCF    0xFB
    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*---- CONSTANTS ---- */
#define number_enters 6
#define bytes_size 10

/* ---- FUNCTIONS PROTOTYPES ---- */
int *cryptography(int bytes[]);
int *decryptography(int bytes[]);
void print_bytes_criptographied(char label[], int bytes[]);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    int bytes[number_enters] = {[0 ... 5] = 0x1};

    for (char i = 0; i < number_enters; i++)
    {
        printf("Enter a hexadecimal [%d] to cryptographing: 0x", i);
        scanf("%x", &bytes[i]);
    }

    print_bytes_criptographied("Cryptography", cryptography(bytes));
    print_bytes_criptographied("Decryptography", decryptography(bytes));

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ---- FUNCTIONS ---- */
int *cryptography(int bytes[])
{
    for (unsigned char i = 0; i < number_enters; i++)
    {
        if (bytes[i] % 2 == 0)
        {
            bytes[i] = bytes[i] + 5;
        }
        else
        {
            bytes[i] = bytes[i] - 3;
        }
    }
    return bytes;
}

int *decryptography(int bytes[])
{
    for (unsigned char i = 0; i < number_enters; i++)
    {
        if (bytes[i] % 2 == 0)
        {
            bytes[i] = bytes[i] + 3;
        }
        else
        {

            bytes[i] = bytes[i] - 5;
        }
    }
    return bytes;
}

void print_bytes_criptographied(char label[], int bytes[])
{

    printf("\n +++++ %s +++++ \n", label);
    for (unsigned char i = 0; i < number_enters; i++)
    {
        printf("0x%2x\n", bytes[i]);
    }
    printf("\n");
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