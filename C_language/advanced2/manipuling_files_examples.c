/* ============================================================================

    Program: FILES in C

    o ponto de vista da Linguagem C, um arquivo é simplesmente um conjunto
    sequencial de bytes – que também pode ser chamado de stream – onde até
    mesmo uma nova linha é interpretada como um caractere.

    Para trabalhar com arquivos em um programa em C, precisamos a priori abrir
    um arquivo, associando-o a uma variável em nosso código. Podemos realizar
    todo o tipo de operação com os dados do arquivo e então devemos desvincular
    o mesmo de nosso programa, realizando o fechamento do arquivo.

    A abertura do arquivo é realizada através de um ponteiro para arquivo e
    utilizamos para isso o tipo FILE. A escrita é toda com letras maiúsculas
    mesmo para destacar, pois FILE é um tipo definido na biblioteca <stdio.h>
    e não consiste em um tipo de dado básico ou em uma palavra reservada do C.

        FILE *nome; => declarando um ponteiro para arquivo

    Observe o operador de indireção (*) antes do nome do ponteiro para arquivo. E o nome
    segue as mesmas regras conhecidas de declaração de variáveis em C.

    A função fopen é utilizada para a abertura do arquivo e está contida também
    na biblioteca stdio.h.

        FILE *fopen(const char *filename, const char *mode);

    O parâmetro filename é uma string contendo o nome do arquivo a ser aberto,
    com respectiva extensão, como por exemplo "info.txt”. E mode é a string que
    conterá o modo de abertura do arquivo.

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

    Antes do fechamento do arquivo, todos os dados são devidamente gravados.
    Após, é necessário liberarmos a memória alocada pela função fopen. Para isso,
    utilizamos a função fclose.

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

    FILE *file_rlsp, *file_rlsp_read;
    int char_read_file;

    if ((file_rlsp = fopen("teste.txt", "w")) == NULL)
    {
        printf("ERROR\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
        exit(0);
    }

    if ((file_rlsp_read = fopen("teste.txt", "r")) == NULL)
    {
        printf("ERROR\n");
        system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
        exit(0);
    }

    fputc('H', file_rlsp); /* Adiciona um CARACTER no arquivo*/
    fputc('e', file_rlsp);
    fputc('l', file_rlsp);
    fputc('l', file_rlsp);
    fputc('o', file_rlsp);
    fputc('\n', file_rlsp);

    int value = 0;
    for (unsigned char i = 0; i < 40; i++)
    {
        for (unsigned char j = 0; j < 80; j++)
        {
            if (i + j + 33 > 100)
            {
                value = i + j + 48 - 65;
            }
            else
            {
                value = i + j + 48;
            }
            fputc((char)value, file_rlsp);
        }
        fputc('\n', file_rlsp);
    }

    printf("Success - File is created !!!\n");

    while ((char_read_file = fgetc(file_rlsp_read)) != EOF)
    {
        printf("%c", char_read_file);
    }

    fclose(file_rlsp);
    printf("Success - File is read !!!\n");

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS */
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
