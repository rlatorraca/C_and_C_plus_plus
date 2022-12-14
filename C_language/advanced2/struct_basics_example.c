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
/* --- FUNCTIONS PROTOTYPES --- */

/* ========================================================================= */
/* --- STRUCTS  --- */
struct client
{
    char name[31];
    char address[41];
    char city[31];
    char telephone[12];
    char postal_code[7];
};

struct client c;

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    printf("Nome: ");
    scanf(" %30[^\n]", c.name);
//    fflush(stdin);
//    setbuf(stdin, NULL);

    printf("Address: ");
    scanf(" %41[^\n]", c.address);
//    fflush(stdin);
//    setbuf(stdin, NULL);

    printf("City: ");
    scanf(" %30[^\n]", c.city);
//    fflush(stdin);
//    setbuf(stdin, NULL);


    printf("Telephone: ");
    scanf(" %11[^\n]", c.telephone);
//    fflush(stdin);
//    setbuf(stdin, NULL);

    printf("Postal Code: ");
    scanf(" %6[^\n]", c.postal_code);
//    fflush(stdin);
//    setbuf(stdin, NULL);

    printf("\nDados do cliente: \n");
    printf(c.name);
    putchar('\n');
    printf(c.address);
    putchar('\n');
    printf(c.city);
    putchar('\n');
    printf(c.telephone);
    putchar('\n');
    printf(c.postal_code);

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

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

