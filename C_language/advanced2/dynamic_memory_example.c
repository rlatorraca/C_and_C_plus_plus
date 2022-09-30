/* ============================================================================

    Program: Alocacao dinamica de memoria

        void *malloc(size_t n_bytes);

    O tipo size_t normalmente é definido como unsigned int através de typedef
    na biblioteca stdlib.h. A função malloc basicamente cria um bloco com
    n bytes retornando assim o endereço
desse bloco. Caso a alocação falhe, a função retorna NULL. Observe que o tipo desta função é
void*, repare no operador de indireção presente ali. Por este motivo, a função retorna um
ponteiro para o tipo de dado a ser alocado. Portanto void* significa o retorno de um ponteiro
para qualquer tipo de dado.

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
/* --- STRUCTS || UNIONS --- */

/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPES --- */



/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{

    char s[100], *palloc;                                   /* ponteiro para caracteres */

    printf("Entre com a string: ");
    fgets(s, sizeof(s), stdin);                   /* aloca memória */

    palloc = (char *)malloc(strlen(s)+1);              /* OBS.: incluir a biblioteca string.h no projeto */

    if(palloc==NULL)                                        /* verifique se alocou corretamente */
        puts("Out of Memory [RLSP]\n");
    else {
        strcpy(palloc, s);                           /* copia strings */
        putchar(0x0A);
        s[strcspn(s, "\n")] = 0; // Retira o ENTER incluido pelo fgets
        printf("String \"s\"        : %s    [size: %d bytes]", s, sizeof(s)*100);

        putchar(0x0A);
        size_t size_palloc = strcspn(palloc, "\n");
        palloc[strcspn(palloc, "\n")] = 0; // Retira o ENTER incluido pelo fgets
        printf("String \"*palloc\"   : %s    [size: %d bytes]", palloc, size_palloc+1);
        putchar(0x0A);

        free(palloc);                                   /* libera memória */
    }
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

