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

/* ========================================================================= */
/* --- CONSTANTS --- */

/* ========================================================================= */
/* --- MACROS --- */


/* ========================================================================= */
/* --- STRUCTS  --- */
/* método 1 */
struct protocolos
{
    int spi;
    int i2c;
    int can;
} *serial; /* declara ponteiro para a estrutura protocolos */


/* método 2 */
struct drinks
{
    int margarita;
    int dry_martini;
    int caipirinha;
} open_bar;

struct drinks_values
{
    float margarita_value;
    float dry_martini_value;
    float caipirinha_value;
} open_bar_values;
struct drinks *cheers; /* declara ponteiro para estrutura drinks */



/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPES --- */
void print_drinks_values(struct drinks_values *p);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    /* ponteiro cheers aponta para o endereço da estrutura open_bar */
    cheers = &open_bar;

    cheers->margarita = 111;
    cheers->dry_martini = 222;
    cheers->caipirinha = 333;

    printf("\n+++++ Drinks Quantities +++++\n");
    printf("Marguerita:     %d\n",cheers->margarita); /* imprime 111 */
    printf("Dry_martini:    %d\n",cheers->dry_martini); /* imprime 222 */
    printf("BRL Capirinha:  %d\n",cheers->caipirinha); /* imprime 333 */

    print_drinks_values(&open_bar_values);
    printf("\n+++++ Drinks Values +++++\n");
    printf("Marguerita:     $%2.2f\n",open_bar_values.margarita_value); /* imprime 111 */
    printf("Dry_martini:    $%2.2f\n",open_bar_values.dry_martini_value); /* imprime 222 */
    printf("BRL Capirinha:  $%2.2f\n",open_bar_values.caipirinha_value); /* imprime 333 */

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */
void print_drinks_values(struct drinks_values *p)
{
    p->margarita_value = 5.55;
    p->dry_martini_value = 7.40;
    p->caipirinha_value = 10.95;
} /* end print_drinks_values */

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

