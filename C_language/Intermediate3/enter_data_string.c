/* ============================================================================

    Program: Solicita ao usuario: Nome, Sobrenome, Endereco, Bairro, Cidade
    CEP e telefone. Armazenado os dados, devem ser impresso na tela.

        - char name_String[size+1]

        size = string size
        1 = NULL character (\0)


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

    char name[30] = "";
    char surname[30] = "";
    char address[100] = "";
    char neigbourhood[20] = "";
    char city[20] = "";
    char province[2] = "";
    char postal_code[6] = "";
    char telephone[10] = "";

    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nEnter your surname: ");
    fgets(surname, sizeof(surname), stdin);

    printf("\nEnter your addressd:");
    fgets(address, sizeof(address), stdin);

    printf("\nEnter your neigbourhood:");
    fgets(neigbourhood, sizeof(neigbourhood), stdin);

    printf("\nEnter your City:");
    fgets(city, sizeof(city), stdin);

    printf("\nEnter your Postal Code:");
    fgets(postal_code, sizeof(postal_code), stdin);

    printf("\nEnter your neigbourhood:");
    fgets(telephone, sizeof(telephone), stdin);

    printf("\n+++++ ALL DATA +++++ \n");

    name[strcspn(name, "\n")] = 0; // Retira o ENTER incluido pelo fgets

    printf("Your complete name is : %s %s\n", name, surname);

    address[strcspn(address, "\n")] = 0;           // Retira o ENTER incluido pelo fgets
    neigbourhood[strcspn(neigbourhood, "\n")] = 0; // Retira o ENTER incluido pelo fgets
    city[strcspn(city, "\n")] = 0;                 // Retira o ENTER incluido pelo fgets
    postal_code[strcspn(postal_code, "\n")] = 0;   // Retira o ENTER incluido pelo fgets
    printf("Your address is: %s, %s. %s. P.O: %s\n", address, neigbourhood, city, postal_code);

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
