/* ============================================================================

    Program: O usuario define valor maximo de aporte para a boilsa de valores.
    Após, ele entra com o valor de 5 acoes (que devem ser armazenados em um vetor)
    e a quantidade para cada ativo. O sistema imprime o valor total em dinheiro e soa
    um alerta caso o aporte seja menor que o total.
    Desenvolva o projeto de modo a alterado para N acoes.

    Ex: o usuario entre com um aporte de $ 2500.00

    Ativos hipoteticos
    EMPA1F: $ 12.95  Quantidade: 30
    EMPA2F: $ 19.45  Quantidade: 14
    EMPA3F: $ 22.12  Quantidade: 50
    EMPA4F: $ 11.23  Quantidade: 100
    EMPA5F: $ 32.40  Quantidade: 200

    Multiplicando cada valor pela quantidade e somando tudo, o resultado eh $ 9,369.80.
    Portanto, o alerta sera emitido, pois o aporte é menor.

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*---- CONSTANTS ---- */
#define stocks_quantity 5
#define stocks_name_size 10

/*---- FUNCTIONS PROTOTYPES ---- */
float total_value_stocks(float *stocks_value, float *stocks_batch);
void check_beep_overloaded_stocks(char stocks_name[stocks_quantity][stocks_name_size], float *stocks_value, float *stocks_batch, float total_invested);
void print_total_value_stocks(char stocks_name[stocks_quantity][stocks_name_size], float *stocks_value, float *stocks_batch);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    /* char **stocks_name = (char **)malloc(sizeof(char *) * stocks_quantity);*/
    char stocks_name[stocks_quantity][stocks_name_size] = {"a", "b", "c", "d", "e"};
    float stocks_value[stocks_quantity] = {0.0};
    float stocks_batch[stocks_quantity] = {0.0};
    float total_invested = 0.0;

    printf("Total available: ");
    scanf("%f", &total_invested);

    printf("\n++++ Total available +++++\n ");
    for (short i = 0; i < stocks_quantity; i++)
    {
        printf("\n++++ Stock [%d] +++++\n", i + 1);

        // stocks_name[i] = malloc(sizeof(char) * 7);
        printf("Enter the name of stock: ");
        scanf("%s", stocks_name[i]);

        printf("Enter the value of that stock: ");
        scanf("%f", &stocks_value[i]);

        printf("Enter the quantity of stock: ");
        scanf("%f", &stocks_batch[i]);
    }

    check_beep_overloaded_stocks(stocks_name, stocks_value, stocks_batch, total_invested);

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/*---- FUNCTIONS ----*/
float total_value_stocks(float *stocks_value, float *stocks_batch)
{

    float result = 0.0;

    for (short i = 0; i < stocks_quantity; i++)
    {
        result += (stocks_value[i] * stocks_batch[i]);
    }

    return result;
}

void check_beep_overloaded_stocks(char stocks_name[stocks_quantity][stocks_name_size], float *stocks_value, float *stocks_batch, float total_invested)
{
    float total_bought = total_value_stocks(stocks_value, stocks_batch);

    if (total_bought > total_invested)
    {
        printf("\a");
        fprintf(stdout, "\a\nBeep!!!! Contribution to buys the stocks are not enough\n\n");
        printf("Total bought: $%.2f | Total invested: $%.2f\n", total_bought, total_invested);
    }

    print_total_value_stocks(stocks_name, stocks_value, stocks_batch);
}

void print_total_value_stocks(char stocks_name[stocks_quantity][stocks_name_size], float *stocks_value, float *stocks_batch)
{

    for (short i = 0; i < stocks_quantity; i++)
    {
        printf("Stock Name: ");
        for (short j = 0; j < stocks_name_size; j++)
        {
            printf("%c", stocks_name[i][j]);
        }
        printf("\tStock Valeu: %.2f  \t", stocks_value[i]);
        printf("Stock Batch %.2f  \n", stocks_batch[i]);

        if (i == stocks_quantity - 1)
        {
            printf("\n");
        }
    }
    printf("\n\n");
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
