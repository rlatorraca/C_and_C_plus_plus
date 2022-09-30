/* ============================================================================

    Program: Binary Files

    Os arquivos binários são utilizados para guardar informações de nossos programas,
    como dados diversos, conteúdo de variáveis, entre outros. Diferentemente dos
    arquivos de texto, aqui escrevemos os bytes através de um vetor e poderemos utilizar
    funções de acesso direto aos elementos: a fread e a fwrite.

        int fwrite(const void *ptr, int size, int n, FILE *arq);

    O parâmetro ptr é um ponteiro para void, pois poderá apontar para qualquer tipo
    e conterá o endereço do que desejamos armazenar em arquivo. size é o tamanho em
    bytes de cada elemento a ser armazenado, e poderemos utilizar a função sizeof
    para obter o tamanho adequado. O n consiste no número de elementos que iremos
    escrever. E arq é o ponteiro para arquivo, que devemos passar como parâmetro
    para fwrite.

    Os parâmetros de fread são semelhantes aos parâmetros de fwrite:

        int fread(const void *ptr, int size, int n, FILE *arq);

    Quando desejamos encontrar o final de um arquivo binário, não podemos recorrer à
    constante EOF, pois o seu valor pode ser lido pelo programa e interpretado como
    um byte de dado. Por este motivo, precisamos recorrer à função feof, que determina
    quando o arquivo binário chegou no final.

    utilizamos as funções fgetc e fputc para leitura e escrita de cada byte do
    arquivo binário, para salientar que também podemos utilizá-las neste tipo de arquivo.

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

    FILE *arq_dat, *arq_bin;
    int ch;
    arq_dat = fopen("info.dat", "rb");

    if (arq_dat == NULL)
    {
        printf("ERROR - reading file\n");
        exit(1);
    }
    arq_bin = fopen("arch.bin", "wb");
    if (arq_bin == NULL)
    {
        printf("ERROR - copying file\n");
        exit(2);
    }
    while (!feof(arq_dat)) // feof = file end of file (Retorn TRUE quando for o fim do arquivo)
    {
        ch = fgetc(arq_dat);
        if (!feof(arq_dat))
            fputc(ch, arq_bin);
    }
    fclose(arq_dat);
    fclose(arq_bin);
    printf("Arquivo copiado com sucesso\n");

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
