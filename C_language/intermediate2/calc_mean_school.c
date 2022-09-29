/* ============================================================================

    Program: Macro que calcula media ponderada entre 4 notas de 1 a 10. O usuario
    ira entrer a nota e o respectivo peso(optional), apos isso sera calculada a
    media ponderada

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* --- MACROS ---*/

#define weighted_average(grade01, grade02, grade03, grade04, weigth01, weigth02, weigth03, weigth04)                \
    float average = 0;                                                                                              \
    float weight = weigth01 + weigth02 + weigth03 + weigth04;                                                       \
    average = ((grade01 * weigth01) + (grade02 * weigth02) + (grade03 * weigth03) + (grade04 * weigth04)) / weight; \
    printf("Mean for that student [%.2f, %.2f, %.2f, %.2f] is => %.2f\n", grade01, grade02, grade03, grade04, average)

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    char chr;
    float weigth01 = 1,
          weigth02 = 2,
          weigth03 = 3,
          weigth04 = 4;

    float grade01 = 0.0,
          grade02 = 0.0,
          grade03 = 0.0,
          grade04 = 0.0;

    printf("Are you gonna enter the weight [Y]es or [N]o: ");
    scanf("%c", &chr);

    if (chr == 'Y' || chr == 'y')
    {
        printf("Enter grade of FIRST BIMESTER: ");
        scanf("%f", &grade01);

        printf("Enter weigth for FIRST BIMESTER: ");
        scanf("%f", &weigth01);

        printf("Enter grade of SECOND BIMESTER: ");
        scanf("%f", &grade02);

        printf("Enter weigth for SECOND BIMESTER: ");
        scanf("%f", &weigth02);

        printf("Enter grade of THIRD BIMESTER: ");
        scanf("%f", &grade03);

        printf("Enter weigth for THIRD BIMESTER: ");
        scanf("%f", &weigth03);

        printf("Enter grade of FOURTH BIMESTER: ");
        scanf("%f", &grade04);

        printf("Enter weigth for FOURTH BIMESTER: ");
        scanf("%f", &weigth04);
    }
    else
    {
        printf("Enter grade of FIRST BIMESTER: ");
        scanf("%f", &grade01);

        printf("Enter grade of SECOND BIMESTER: ");
        scanf("%f", &grade02);

        printf("Enter grade of THIRD BIMESTER: ");
        scanf("%f", &grade03);

        printf("Enter grade of FOURTH BIMESTER: ");
        scanf("%f", &grade04);
    }

    weighted_average(grade01, grade02, grade03, grade04, weigth01, weigth02, weigth03, weigth04);

    /* Standard way
    int number = rand(); // Gera um numero aleatorio de 15 bits 0-32767
                         // Para normalizar para 8 bits temos que dividir 15bits / 7bits = 8bits
                         //    (2^31 / 2^8(=128) = 2^27 (=8388608)
                         //



    for (int i = 0; i < 10; i++)
    {
        int number = rand();
        printf("[%d]%d in 31 bits\n", i, number);
        printf("[%d]%d in 8 bits \n\n", i, (number / 8388608));
    }
    */

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
