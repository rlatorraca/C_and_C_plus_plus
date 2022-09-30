/* ============================================================================

    Program: Recursividade

    Recursividade, ou recursão, eh a capacidade que uma função tem de chamar a si
    própria. Na Linguagem C podemos tranquilamente trabalhar com funções recursivas.
    Na recursividade direta, a função chama a si própria. Na recursividade indireta,
    a função A chama a função B que volta a chama a função A. Um exemplo de função
    recursiva é a downto0 apresentada abaixo, que imprime na tela os números de n até 0.

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
/* --- FUNCTIONS PROTOTYPES --- */
void zero_to_n(int n, int counter);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "en-US");
    setlocale(LC_ALL, "fr_Canada");

    int n = 0, counter = 1;

    printf("\nEnter a value for \"n\" : ");
    scanf("%d", &n);

    zero_to_n(n, counter);

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

void zero_to_n(int n, int counter)
{

    if (n < counter)
        return;
    printf("%d\n", counter);
    zero_to_n(n, counter + 1);
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
