/* ============================================================================

    Program: Le o tamanho do arquivo por meio de fseek

    A função que permite apontar o ponteiro para qualquer posição do arquivo é a fseek,
    que tem o seu protótipo explícito no Box 8.

        int fseek(FILE *arq, long offset, int org);

    A função fseek retornará falso caso o movimento no arquivo tenha sido realizado com
    sucesso, do contrário, devolverá verdadeiro. O parâmetro arq é o ponteiro para arquivo em que
    desejamos posicionar, offset é o número de bytes que queremos avançar (valor positivo) ou
    retroceder (valor negativo) no arquivo. Já o org indicará o local a partir de onde o salto no
    arquivo será realizado e são possíveis 3 constantes já pré-definidas para este parâmetro:

        - SEEK_SET, ou 0, realiza o salto a partir do início do arquivo;
        - SEEK_CUR, ou 1, realiza o salto a partir da posição corrente do arquivo;
        - SEEK_END, ou 2, realiza o salto a partir da posição final do arquivo.

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
void print_celsius(FILE *file);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main(int argc, char *argv[]) /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    FILE *file_bin, *file_save;
    float temperature[10];
    int size_file;

    file_bin = fopen("celsius.dat", "rb");

    if (file_bin == NULL)
    {

        printf("Error - Empty File ...\n");
        file_save = fopen("celsius.dat", "wb");
        fclose(file_save);
        system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

        // exit(2);
    }
    else
    {
        print_celsius(file_bin);
        fclose(file_bin);
    }

    file_save = fopen("celsius.dat", "ab");

    for (register int i = 0; i < 10; i++)
    {
        printf("[%d] Temperature in celsius: ", i + 1);
        scanf("%f", &temperature[i]);
    }
    fwrite(temperature, sizeof(float), 10, file_save);

    printf("\nTemperature added\n");
    fclose(file_save);

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

void print_celsius(FILE *file)
{
    int ch;
    float value;

    do
    {
        fread((void *)&value, sizeof(float), 1, file);
        if (!feof(file))
            printf("Temperature in celsius: %.2f\n", value);
    } while (!feof(file));
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
