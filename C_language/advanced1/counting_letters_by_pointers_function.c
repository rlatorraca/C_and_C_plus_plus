/* ============================================================================

    Program: Draft / Model

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

#include <ctype.h>

/* ========================================================================= */
/* --- PROTOTYPES FUNCTION --- */
int count_letters(char *s);
int total_string_size(char *s);
void print_letters(char *str, int (*func)(char *));

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    // Set only the LC_MONETARY category and return "fr-FR"
    setlocale(LC_MONETARY, "fr-FR");

    char company[31] = "RLSP-79.Inc"; // 30 letters + 1 NULL (\0)

    // Passa company [ char ], e a funcao count_letters()
    printf("Count just letters:\n");
    print_quantity_letters(company, count_letters);

    printf("\nCount whole characters on string:\n");
    print_quantity_letters(company, total_string_size);

    /* Press Enter to continue ... */
    system("read -p '\nPress Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/*----- FUNCTIONS -----*/

int count_letters(char *s)
{
    register char i = 0, letters = 0;

    while (s[i] != '\0')
    {
        if (isalpha(s[i])) // TRUE = quando achar uma letra na string
            letters++;
        i++;
    } /* end count_letters */
    return letters;
} /* end count_letters */

int total_string_size(char *s)
{
    register char i = 0, letters = 0;

    while (s[i] != '\0')
    {
        i++;
    } /* end total_string_size */
    return i;
} /* end total_string_size */

void print_quantity_letters(char *str, int (*func)(char *)) // Ponteiro para STRING, Ponteiro para FUNCAO
{
    printf("Letters: %d\n", (*func)(str));
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
