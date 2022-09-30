/* ============================================================================

    Program: FILES in C

    * fgets + fopen
    poderá utilizar as funções fprintf e fscanf que permitem a escrita e leitura
    de dados em modo formatado. Ambas têm certa semelhança com as funções que já
    utilizamos largamente para escrita no console e leitura do teclado printf e scanf,
    apenas necessitam de um parâmetro adicional, que é o ponteiro para arquivo.

    O mesmo código do Box 9, por ser utilizado para leitura e escrita de arquivos de texto
    (formato txt), pode ser desenvolvido com as funções fprintf e fscanf. Confira no Box 10,
    você pode alterar apenas a linha de leitura e escrita do novo arquivo.

        while(fscanf(file_read,”%c”,&ch)!=EOF)  =>  lê todos os caracteres
            fprintf(file_write,”%c”,ch);         =>  copia para output




    Os modos possíveis para abertura estão explícitos abaixo:

    Modo            Significado
    r               Abre um arquivo-texto para leitura (read)
    w               Cria um arquivo-texto para escrita (write)
    a               Acrescenta dados a um arquivo-texto (append)
    rb              Abre um arquivo binário para leitura (read binary)
    wb              Cria um arquivo binário para escrita (write binary)
    ab              Acrescenta dados a um arquivo binário (append binary)
    r+              Abre um arquivo-texto para leitura/escrita
    w+              Cria um arquivo-texto para leitura/escrita
    a+              Acrescenta ou cria um arquivo-texto para leitura/escrita
    r+b             Abre um arquivo binário para leitura/escrita
    w+b             Cria um arquivo binário para leitura/escrita
    a+b             Acrescenta a um arquivo binário para leitura/escrita



        int fclose(FILE *arq);

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
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    FILE *file_rlsp, *file_rlsp_copy;
    int char_read_file;
    char name_file[50] = "";

    printf("Enter file name: ");
    fgets(name_file, sizeof(name_file), stdin);

    file_rlsp = fopen(name_file, "w"); // Learquivo com o nome escolhido

    if (file_rlsp == NULL)
    {
        printf("ERROR... writing\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
        exit(1);
    }

    fputs("Escrita dentro do arquivo", file_rlsp);
    fclose(file_rlsp);

    file_rlsp = fopen(name_file, "r");

    if (file_rlsp == NULL)
    {
        printf("ERROR... Reading \n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
        exit(2);
    }

    if (fgets(name_file, sizeof(name_file), file_rlsp))
    {
        fprintf(file_rlsp, "%c", char_read_file);
    }

    fclose(file_rlsp);

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
