/* ============================================================================

    Program: Parameter Passing in C

    Quando a passagem é realizada por valor, estamos enviando na realidade uma
    cópia do valor da variável para a função.

    A função mult_dobro multiplica o dobro dos parâmetros passados para ela e
    retorna o resultado, quando passamos x e y, os seus valores são copiados
    para a e b. Poderíamos escrever toda a expressão em uma única linha, mas
    salientamos a multiplicação de a e b por 2 para ficar evidente que podemos
    atualizar os seus conteúdos dentro da função. Ao final do processo da função,
    a e b são destruídas. Repare que apesar de alterarmos a e b, as variáveis da
    função principal x e y mantiverem seus valores originais. Em outras palavras,
    uma função não irá alterar o conteúdo das variáveis passadas para ela, mas
    criar cópias para trabalhar os seus valores.

    Quando a passagem é realizada por valor, estamos enviando na realidade uma
    cópia do valor da variável para a função.


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
float times_double(float x, float y);

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

    printf("2x(%.2f) x 2x(%.2f) = %.2f\n", x, y, times_double(x, y));

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

float times_double(float a, float b)
{

    a *= 2;
    b *= 2;

    return a * b;
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
