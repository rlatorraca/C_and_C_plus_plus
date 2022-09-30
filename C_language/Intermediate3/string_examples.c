/* ============================================================================

    Program: Strings

        - char name_String[size+1]

        size = string size
        +
        1 caracter = NULL character (\0)


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
#include <assert.h>

/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPES --- */

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    // STRING
    char str[31] = "RLSP"; /* Possivel ate 30 caracteres + 1 (null)*/
    char str3[] = "RLSP";  /* 4 caracteres + null*/
    char name[30] = "";
    char surname[30] = "";
    char address[100] = "";
    char new_name[] = "";
    char new_surnamname[] = "";

    // Vetor de caracteres
    char str2[] = {'R', 'L', 'S', 'P', ' ', 'C', 'A'}; /* Possivel ate 30 caracteres + 1 (null)*/

    printf("String : %s - size: %lu\n", str, sizeof(str));
    printf("String : %s - size: %lu\n", str2, sizeof(str2));
    printf("String : %s - size: %lu\n", str3, sizeof(str3));

    puts("Hello");     /* Imprime apenas TEXTO e acrescenta \n automaticamente*/
    printf("Hello\n"); /* Imprime apenas TEXTO e acrescenta \n automaticamente*/

    printf("\nEnter your name: ");
    // scanf("%30s[^\n]", name); /* Scanf com STRINGS nao precisa do & para fazer a leitura da variavel e insere NULL quando achar um espaco*/
    fgets(name, sizeof(name), stdin);

    printf("\nEnter your surname: ");
    // scanf("%30s[^\n]", surname);
    fgets(surname, sizeof(surname), stdin);

    /* Para LER frase em STRINGS completas devemos usar fgets (gets no more accepted) */
    printf("\nEnter your addres:");
    // scanf("%109s[^\n]", address);
    fgets(address, sizeof(address), stdin);

    printf("\n+++++ ALL DATA +++++ \n");

    name[strcspn(name, "\n")] = 0; // Retira o ENTER incluido pelo fgets
    printf("Your complete name is : %s %s\n", name, surname);
    printf("Your address is: %s\n", address);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS  --- */

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
