/*====================================================================================================================================================
    Program: Example of characters in C

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================+========================================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        char caracter)name;  => declaracao de variavel do tipo char (CARACTERES and INT)
            - Sera araazenado o valor da tabela ASCII
            - Até 256 caracteres (LETRAS, NUMERO e SIMBOLOS)  1 byte (8 bits)

        char name_caracter = 'A' => armazena o caracter B na variavel (entre apostofros)
        char name_caracter = '2' => armazena o caracter 2 e nao o numero 2
        char name_caracter = 2 => armazena o numero 2 e nao o caracter 2
        char name_caracter = 'S" => armazena o simbolo $
    */

    char char1 = 2, char2 = 10, char3 = 4, result;

    printf("char1 + char2 + char4 = %d\n", char1 + char2 + char3);
    printf("%d + %d + %d = %d\n", char1, char2, char3, char1 + char2 + char3);
    printf("result = %d\n", result);

    printf("=============================================\n");

    char caracter1 = 'R';
    char caracter2 = 89;
    char caracterHex = 0x77;

    printf("Cararter 1 is %c\n", caracter1);
    printf("Cararter 1 em ASCII - Decimal %d\n", caracter1);
    printf("Cararter 1 em ASCII - OCtal %o\n", caracter1);
    printf("Cararter 1 em ASCII - Hexadecimal %X\n\n", caracter1);

    printf("Cararter 2 is %c\n", caracter2);
    printf("Cararter 2 em ASCII - Decimal %d\n", caracter2);
    printf("Cararter 2 em ASCII - OCtal %o\n", caracter2);
    printf("Cararter 2 em ASCII - Hexadecimal %X\n\n", caracter2);

    printf("Cararter Hex is %c\n", caracterHex);
    printf("Cararter Hex em ASCII - Decimal %d\n", caracterHex);
    printf("Cararter Hex em ASCII - OCtal %o\n", caracterHex);
    printf("Cararter Hex em ASCII - Hexadecimal %X\n\n", caracterHex);

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]' key");

    return 0;
}