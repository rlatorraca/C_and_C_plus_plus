/* ============================================================================

    Program: Parameter Passing by Command Line in C

    Uma das características do C é permitir a criação de programas que permitam
    a passagem de parâmetros através das linhas de comando do sistema operacional.
    A linha de comando enviada ao programa já deve ser reconhecida no instante em
    que a execução inicia, por este motivo, a função main deverá receber as linhas
    de comando. Os dois parâmetros que são passados para main.

    O primeiro parâmetro, ARGC, é um inteiro que indica quantos argumentos foram
    passados na linha de comando, onde o nome do programa está incluso.
    E ARGV é um vetor que conterá as strings que poderão ser passadas na linha
    de comando.

    Para rodar
    $ gcc -o <nome_program>
    $ sudo chmod +x <nome_programa_compilado>
    $ ./<nome_programa_compilado>

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
/* --- FUNCTION PROTOTYPES --- */
void print_square(int argc, char **argv);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */

/*
    argc = numero de argumentos passados
    argv = vetor que conterá as strings que poderão ser passadas na linha de comando
*/

int main(int argc, char *argv[])

{

    setlocale(LC_ALL, "fr_Canada");

    printf("----- Square -----\n"); /* cabeçalho da tabela */
    printf("Number  Square\n");     /* cabeçalho da tabela */

    print_square(argc, argv);

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */
void print_square(int argc, char **argv)
{

    float number = 0.0, square = 0.0; /* número, square */

    for (unsigned char i = 1; i < argc; i++)
    {
        /*atoi => converte uma string para int */
        /*atof => converte uma string para float */
        number = atof(argv[i]);   /* inicia em 1, ignora o nome */
        square = number * number; /* converte string para inteiro */
        printf("%5.3g   %5.3g\n", number, square);
        // printf("%.3f   %.3f\n", number, square);
    } /* end for */
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
