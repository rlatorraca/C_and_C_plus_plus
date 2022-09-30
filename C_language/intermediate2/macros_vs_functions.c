/* ============================================================================

    Program: Examples of MACROS vs FUNCTIONS

    Aprendemos a desenvolver macros em nossa aula anterior. Uma dúvida que surge, e
    isso é perfeitamente normal, é quando utilizar macros e quando utilizar funções
    em nossos códigos? Qual a diferença entre ambas? Veremos na aula que encerra o Módulo 6.

        - Macros apresentam trechos de código, normalmente pequenos. Funções podem
        apresentar a dimensão necessária para a aplicação deseja.
        - Macros não têm tipos associados. Funções precisam ter tipos de dados bem definidos.
        - Macros são expandidas o número de vezes em que for chamada no código. Funções são
        compiladas uma única vez.
        - Por se tratarem de códigos expandidos, os executáveis que utilizam muitas macros
        tendem a ser maiores em tamanho do que os que utilizam função. Como vantagem, temos
        um processamento ligeiramente mais rápido.
        - Em códigos com muitas funções, conseguimos um tamanho reduzido porém o processamento
        tende a ser um pouco mais lento.

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* --- MACROS --- */
#define resistor_resistence_macro(V, A) V / A

#define imprimir_macro()   \
    printf("Hello!!! \n"); \
    printf("2\n");         \
    printf("3\n")

/* --- FUNCTIONS PROTOTYPE --- */
float resistor_resistence(float V, float A);
void imprimir_func();

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "en-US");

    for (int i = 0; i < 100000; i++)
    {
        imprimir_macro();
    }

    /*
    printf("Resistor resistence is %.2f Ohm. [by Macro] \n", resistor_resistence_macro(12.0, 1.0e-3));
    printf("Resistor resistence is %.2f Ohm. [by Function] \n", resistor_resistence(12.0, 1.0e-3));
    /*

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* --- FUNCTIONS IMPLEMENTATIONS --- */

float resistor_resistence(float V, float A)
{
    return (float)V / A;
}

void imprimir_func()
{
    printf("Hello!!! \n");
    printf("2\n");
    printf("3\n");
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
