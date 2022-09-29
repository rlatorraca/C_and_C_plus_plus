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

/* ========================================================================= */
/* --- CONSTANTS --- */

/* ========================================================================= */
/* --- MACROS --- */

/* ========================================================================= */
/* --- STRUCTS || UNIONS --- */

union contents
{
    unsigned short value;
    unsigned char two_bytes[2];
};

/* ========================================================================= */
/* --- FUNCTIONS PROTOTYPES --- */
unsigned short record_on_file(union contents *d, FILE *arq);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    FILE *file_dat;
    union contents word;

    word.value = 151079; /* exemplo de dado. Gravará 1A04h em rec.dat */

    if (!record_on_file(&word, file_dat))
    {
        printf("Error generating file.\n");
        system("read -p '\nPress Enter to continue...[RLSP]\n' key");
        exit(1);
    }
    printf("Success!\n");

    /* Press Enter to continue ... */
    system("read -p '\nPress Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */
unsigned short record_on_file(union contents *word, FILE *file)
{
    if ((file = fopen("rec.dat", "wb")) == NULL)
    {
        printf("Inside fopen\n");
        return 0;
    }

    fputc(word->two_bytes[0], file);
    fputc(word->two_bytes[1], file);
    fclose(file);
    return 1;
} /* end record_on_file */

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
