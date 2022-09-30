/* ============================================================================

    Program: Parameter Passing by Reference/ in C

    Diferente da passagem de parametros por valor, a passagem de parameto por
    referencia utilizamos ponteiros.
    Utilizando ponteiros, podemos de certa forma "burlar” essa regra da passagem
    por valor ond eos valores da funcao principal sao preservados e passamos valores
    para estes entao seram manipulados por outras variaveis dentro de um metodo.
    Vamos supor que necessitamos de um procedimento para alterar o conteúdo de
    duas variáveis em nosso código principal.

    Como pode ser visto, nós passamos uma cópia do endereço das variáveis x e y
    para o procedimento, de modo que consigamos alterar os seus conteúdos através
    dos ponteiros. Em algumas obras esse processo será chamado de passagem por
    referência. No entanto, ainda temos de certo modo uma passagem por valor,
    pois é enviada uma cópia do endereço das variáveis para a função.
    Quando passamos vetores para funções, estamos realizando um método semelhante,
    uma vez que na realidade passamos o endereço do primeiro elemento do vetor.
    Utilizamos apenas o próprio nome do vetor na passagem pois consiste em uma
    abstração para o endereço do primeiro elemento, como vimos em aulas anteriores.

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
float square_and_cube(float *a, float *b);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    float x = 0.0, y = 0.0;

    printf("Value of X: ");
    scanf("%f", &x);

    printf("Value of Y: ");
    scanf("%f", &y);

    float _x = x;
    float _y = y;

    printf("\nx=%.2f\n", x);
    printf("y=%.2f\n\n", y);

    square_and_cube(&x, &y); /* Passa o ENDERECO da variavel */

    printf("Square of %.2f = %.2f\n", _x, x);
    printf("Cube of %.2f = %.2f\n\n", _y, y);

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

float square_and_cube(float *a, float *b)
{

    float temp_a = *a;
    float temp_b = *b;

    *a = temp_a * temp_a;
    *b = temp_b * temp_b * temp_b;

} /* square_and_cube */

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
