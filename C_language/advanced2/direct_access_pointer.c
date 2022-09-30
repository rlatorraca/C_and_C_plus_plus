/* ============================================================================

    Program: Binary Files

    Uma outra vantagem de trabalharmos com arquivos binários é a possibilidade de
    acessarmos diretamente pontos intermediários no arquivo. A função ftell retorna
    um inteiro longo e pode ser utilizada para lermos a posição atual do arquivo
    binário.

    Abrimos um arquivo binário para escrita e inserimos 4 bytes no mesmo, através
    da função fputc. Após, imprimimos o valor retornado por ftell, que será 4, pois
    o ponto atual do arquivo é 4. Experimente inserir a função rewind após o printf
    do código e imprimir novamente o retorno de ftell.

    Como pode ser visto, teremos o valor 0 retornado por ftell uma vez que a função
    rewind devolve o ponteiro para o início do arquivo. Esta função pode ser utilizada
    quando você deseja reler um arquivo binário no código, sem a necessidade de reabri-lo.

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
/* --- FUNCTIONS PROTOTYPES --- */

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    FILE *arq_bin;
    int ch;

    arq_bin = fopen("arch2.bin", "wb");

    if (arq_bin == NULL)
    {
        printf("ERRO\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
        exit(1);
    }

    /* inicia no endereço 0 */
    fputc(0xAA, arq_bin);
    /* estará no endereço 1 */

    fputc(0xAB, arq_bin);
    /* estará no endereço 2 */

    fputc(0xAC, arq_bin);
    /* estará no endereço 3 */

    fputc(0xAD, arq_bin);
    /* estará no endereço 4 */

    fputc(0xAE, arq_bin);
    /* estará no endereço 4 */

    fputc(0xAF, arq_bin);
    /* estará no endereço 4 */

    fputc(0xF0, arq_bin);
    /* estará no endereço 4 */

    fputc(0xFB, arq_bin);
    /* estará no endereço 4 */

    printf("\nFile saved successfully...\n");

    /* imprimirá 4 como resultado: */
    printf("End.Atual: %ld\n", ftell(arq_bin)); // Le a posição atual do arquivo binário

    rewind(arq_bin); /* volta para a posição 0 => Rebonina para o inicio*/

    printf("\nFile rewinded successfully...\n");
    /* imprimirá 0 como resultado: */
    printf("\nEnd.Atual: %ld\n", ftell(arq_bin));

    fclose(arq_bin);

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
