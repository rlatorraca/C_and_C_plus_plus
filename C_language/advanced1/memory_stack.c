/* ============================================================================

    Program: A simple Memory stack example
     [Pilha de Memoria]

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
#define LEVELS 8

/* ========================================================================= */
/* --- GLOBAL ATRIBUTES --- */
int *pointer1, *pointer_minimum_level, stack[LEVELS], counter;

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
void print_stack(); /* IMPRIME a Pilha*/
void push(int i);   /* INSERE um dado da pilha */
int pop();          /* REMOVE um dado da pilha*/

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    // Set all categories and return "en-US"
    setlocale(LC_ALL, "en-US");

    int data_stack, option;

    pointer1 = stack;              /* APONTA pra um endereco inicial da STACK [PILHA]*/
    pointer_minimum_level = stack; /* APONTA pra um endereco inicial da STACK [PILHA]*/

    for (;;)
    {
        printf("[1] Print STACK on the screen\n");
        printf("[2] Insert data on the stack\n");
        printf("[3] Delete actual data\n");
        printf("[4] Exit\n");
        printf(">>> ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            print_stack();
            break;
        case 2:
            printf("Enter a data [integer]: ");
            scanf("%d", &data_stack);
            push(data_stack);
            break;
        case 3:
            pop();
            break;

        case 4:
            /* Press Enter to continue ... */
            system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

            exit(0); /* EXIT SUCCESS */
        }
    }

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

void push(int value)
{

    pointer1++; /*A cada entrada INCREMENTA-se o endereco apontando pointer1*/

    counter++; /* INCREMENTA o contador de dados*/

    if (pointer1 == (pointer_minimum_level + LEVELS)) /* Se atinggiu o limite da Stack LEVELS lanca o Stack Overflow*/
    {
        printf("STACK OVERFLOW...\n");
        /* Press Enter to continue ... */
        system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

        exit(0); /* EXIT SUCCESS */
    }
    else
    {
        printf("Added data\n");
    }

    /* varivel usada para ascrescentar um delay*/
    for (register long delay = 0; delay < 1e7; delay++)
        ; // 1e7 = 10 milhoes de iteracoes

    *pointer1 = value;
} /*---- end push(int value) ----*/

void print_stack()
{
    for (register int i = 1; i <= counter; i++)
    {
        printf("Stack level %d: %3d\n", i, stack[i]);
    }

    if (counter == 0)
    {
        printf("No data yet into Stack\n");
    }

    system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
} /*---- end print_stack() ----*/

int pop()
{
    if (pointer1 == pointer_minimum_level)
    {
        printf("Stack is EMPTY\n");
        system("read -p 'Press Enter to continue...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
    }
    else
    {
        printf("Removed => item %d - value %d\n", *(pointer1 + counter), stack[counter]);
    }

    for (register long delay = 0; delay < 1e7; delay++)
        ; // 1e7 = 10 milhoes de iteracoes

    pointer1--; // retrocede um endereco na stack

    counter--; // decrementa o contador de dados

    return *(pointer1 + 1); // retorna a valo removido

} /*---- end pop() ----*/
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
