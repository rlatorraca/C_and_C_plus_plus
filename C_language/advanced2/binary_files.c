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

    FILE *file_w, *file_r;
    char vec1[20] = {8, 4, 3, 1, 2, 0, 3, 4, 9, 4, 'R', 'L', 'S', 'P', 79};
    short vec2[4] = {4, 10, 200, 1000};
    double vec3[4] = {12.34, 34.56, 45.56, 56.99};

    file_w = fopen("info.dat", "wb"); /* cria para ESCRITA binária */

    if (file_w == NULL)
    {
        printf("ERROR - writng...\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
        exit(1);
    }
    fwrite(vec1, sizeof(char), 20, file_w);
    fwrite(vec2, sizeof(short), 4, file_w);
    fwrite(vec3, sizeof(double), 4, file_w);

    fclose(file_w);
    printf("File saved successfully...\n");

    file_r = fopen("info.dat", "rb"); /* cria para LEITURA binária */

    if (file_r == NULL)
    {
        printf("ERROR - wiriing...\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
        exit(2);
    }

    fread(vec3, sizeof(double), 10, file_r);

    for (register int i = 0; i < 20; i++)
        printf("%d ", vec1[i]);

    printf("\n");

    for (register int i = 0; i < 4; i++)
        printf("%d ", vec2[i]);

    printf("\n");

    for (register int i = 0; i < 4; i++)
        printf("%.2lf ", vec3[i]);

    fclose(file_r);
    printf("\nFile printed successfully...\n");

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
