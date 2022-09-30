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
void down_to_zero(int n);
int how_big_string(char *name);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "en-US");
    setlocale(LC_ALL, "fr_Canada");

    char name[20] = "RLSP Inc";

    down_to_zero(20);

    printf("\nString size is %d \n", how_big_string(name));

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

void down_to_zero(int n)
{
    if (n < 0)
        return;
    printf("%d  ", n);
    down_to_zero(n - 1);
}

int how_big_string(char *name)
{
    if (*name == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + how_big_string(name + 1);
    }
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
