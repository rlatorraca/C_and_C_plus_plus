/* ============================================================================

    Program: Binary Files

    Podemos aproveitar fseek para criar espécies de partições em arquivos binários,
determinando o endereço em que desejamos escrever os dados. Vamos supor que desejamos
gravar os dados BCh e 3Ch nos endereços 00h e 01h respectivamente, porém criaremos uma
partição que escreverá os dados A1h e 73h a partir do endereço 0Bh. O código do Box 10
demonstra como realizar essa tarefa utilizando fseek.

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
    arq_bin = fopen("arch3.bin", "wb");

    if (arq_bin == NULL)
    {
        printf("ERROR- reading ...\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
        exit(2);
    }
    fputc(0xBC, arq_bin); // 0x00
    fputc(0x3C, arq_bin); // 0x01

    fseek(arq_bin, 0x10, SEEK_SET); // Pula para posicao do arqiivo ) 0x10

    fputc(0x11, arq_bin);
    fputc(0x1F, arq_bin);

    fseek(arq_bin, 0x60, SEEK_SET); // Pula para posicao do arqiivo ) 0x60
    fputc(0x79, arq_bin);
    fputc(0x7B, arq_bin);
    fputc(0x7D, arq_bin);
    fputc(0x7F, arq_bin);

    fseek(arq_bin, -10, SEEK_CUR); // Volta -10 , combase no ultimo elememnto 0X7F
    fputc(0x48, arq_bin);
    fputc(0xFF, arq_bin);

    fclose(arq_bin);
    printf("File saved successfully...\n");

    printf("\nFile printed successfully...\n");

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

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
