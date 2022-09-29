/* ============================================================================

    Program: Vectors examples

    Em C podemos utilizar vetores (também chamados de arrays ou matrizes
    unidimensionais) para armazenar um conjunto de dados do mesmo tipo. Em outras palavras,
    quando existem muitas variáveis que devem armazenar dados semelhantes e tenham o mesmo
    tipo de dado, podemos utilizar um vetor. Para declarar um vetor, utilize a sintaxe apresentada
    no Box 1.

       tipo nome[número de elementos];

    O tipo consiste em qualquer tipo de dado da Linguagem C, tal como utilizamos para a
    declaração de variáveis. O nome do vetor segue as mesmas regras para os nomes de variáveis e
    o número de elementos indica quantos elementos o vetor conterá (tamanho do vetor).

        Examples:
            int valores[5]; =>  vetor com 5 números inteiros
            float results[40];  =>  vetor com 40 números reais
            char abcd[4];   => vetor com 4 caracteres


    O índice da primeira posição do vetor sempre será 0 e o índice da última posição de um
    vetor de tamanho n sempre será n-1. Portanto valores[0] é a primeira posição do vetor valores
    e valores[4] é a última posição. Para o vetor results, a primeira posição é results[0] e a última é
    results[39]. Para o vetor abcd, a primeira posição é abcd[0] e a última é abdc[3].

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* --- CONSTANTS --- */

/* 2 Formas de definir constantes*/
/* 01 => melhor para controladores, pois e um diretiva que faz que o pre-processador apenas troca pi pelo valor dentro do codigo*/
#define pi 3.14159265
#define vector_size 10

/*02 => ocupa um endereco de memoria*/
const int constante_int = 10;

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    int values[8] = {-1};              /* Podem armazenar ate 8 valores inteiros [0-7]; inicializando com -1 na primeira posicao o compilador completa com zero as demais posicoes */
    int vector[10] = {12, 23, 45, 56}; /* Quando inicializado com valores, as demais posicoes receberao ZERO*/
    for (unsigned i = 0; i < vector_size; i++)
    {
        values[i] = i + (i * i) - i;
    }

    for (unsigned i = 0; i < vector_size; i++)
    {
        if (i == 8)
        {
            printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        }
        printf("Position [%d] in values has value: %d\n", i, values[i]);
        printf("Position [%d] in vector has value: %d\n\n", i, vector[i]);
    }

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

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
