/* ============================================================================

    Program: MACROS examples
        MACROS : sao trechos de codigo substituidos pelo pre-processador, antes que
        o compilador passe pelo codigo. (Sera processado antes de compilar o codigo)


        MACRO example:

            #define multiplica(a.b) a*b

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* --- MACROS --- */
#define times(a, b) ((a) * (b))
#define division(a, b) ((a) / (b))
#define higher(a, b) ((a) > (b)) ? a : b

#define welcome                  \
    printf("Welcome to ");       \
    printf(" +++ CANADA ++++ "); \
    printf("September 17, 2022\n")

/*o # em text_from_keyboard, acrescentas as ASPAS*/
#define print_text(text_do_teclado) printf(#text_do_teclado)

/* "##"" => eh um concatenador de Operacoes*/
#define concate_ids(index) id##index

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    int result_int, result_float, number01, number02;

    int i, id1 = 10, id2 = 21, id3 = 32, id4 = 43, id5 = 54, id6 = 105;

    welcome;

    print_text(O texto nao tem "ASPAS" pois o "#" faz com que o pre - compilador abstra a necessidade destas\n\n);

    printf("Indexes you can choose: \n");

    printf("%d\t", concate_ids(1));
    printf("%d\t", concate_ids(2));
    printf("%d\t", concate_ids(3));
    printf("%d\t", concate_ids(4));
    printf("%d\t", concate_ids(5));
    printf("%d\n\n", concate_ids(6));

    printf("Enter number 01: ");
    scanf("%d", &number01);

    printf("Enter number 01: ");
    scanf("%d", &number02);

    result_int = times(number01, number02);
    printf("Times(%d, %d) result is : %d\n", number01, number02, result_int);

    /* Pode-usar com variaveis de diferentes tipos de dados */
    result_int = division(number01, number02);
    printf("Division INT(%d, %d) result is : %d\n", number01, number02, result_int);

    result_float = division((float)number01, (float)number02);
    printf("Division FLOAT(%.2f, %.2f) result is : %.2f\n", (float)number01, (float)number02, (float)result_float);

    printf("Is %.2f > %.2f ? Based on gcc-11 compiler the higher is %d\n", (float)number01, (float)number02, higher(number01, number01));

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

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
