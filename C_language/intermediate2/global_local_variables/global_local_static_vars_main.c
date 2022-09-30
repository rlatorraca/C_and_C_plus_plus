/* ============================================================================

    Program: Examples of GLOBAL, LOCAL and STATIS atributes

    ESPEFICADORES DE CLASSE DE ARMAZENAMENTO:

        - STATIC : é um modificador de tipo de armazenamento
            => o valor do atributo SERA PRESERVADO ao sair da funcao

        - GLOBAL: deve ser declarado FORA de qualquer funcao

        - VOLATILE: informa ao compilador que o conteudo de um variavel podera
        ser alterado de forma implicita, sem qualquer sinal de atribuicao evidente.
        A regra para otimizacao feitas pelos compiladores  eh que  o conteudo dp a
        atributo deve ser imutavel, quando nao houver atribuicoes explicitas.

        - REGISTER: solicita ao compiladorq que o conteudo do atributo seja armazenado
        em um registrador da CPU ao inves da memoria. Em tese, as operacoes que usem
        esse especificador sera realizada de forma mais rapida, pois nao sera buscada
        em memoria
            => so pode ser aplicado em variaves LOCAIS e PARAMETROS FORMAS de funcoes
            => Nao pode ser acessado atraves do operado "&", pois nao contem um endereco
            de memoria.

        - EXTERN : usado quando desejamos trabalhar com 2+ arquivos, um possibilidade eh
        declarar todas as suas variaves globais no arquivo principal do projeto, para entao
        poder acessa-lo pelo demais arquivos do projecto.

        - AUTO: serve para declarar variaveis locais, no entanto, todas as variaveis LOCAIS
        assumem o especificador auto de forma IMPLICITA.
            => dizem que AUTO foi incluido em C por motivos de compatibilidade com sua
            antecessora Linguagem B

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "global_local_static_vars2.c" /* inclui ARQUIVO par dentro do classpath*/

/* --- FUNCTIONS PROTOTYPE --- */
int print_local();
int print_static();
int print_static_global();
int print_global();
void print_register_and_auto_atribute();

extern void result(); /* funcao sera chamada funcao em OUTRO arquivo, pois usa EXTERN*/

/* --- GLOBAL ATRIBUTES --- */
int var = 100,
    number = 200,
    test = 300;

static int var_static = 1000; /* VALOR SERA preservado dentro desse arquvio*/

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{
    setlocale(LC_ALL, "fr_Canada");

    int var = 1;

    printf("main() - var : %d\n", var);
    printf("global() - var : %d\n", print_global());
    printf("print_local() - var : %d\n", print_local());
    printf("print_static() - var : %d\n", print_static());
    printf("print_local() - var : %d\n", print_local());
    printf("print_static() - var : %d\n", print_static());
    printf("print_static_global() - var : %d\n", print_static_global());

    result();

    print_register_and_auto_atribute();

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

void print_register_and_auto_atribute()
{
    register int i;
    auto int j;

    for (i = 0; i < 10; i++)
        printf("REGISTER int i [%d]\n", i);

    printf("\n");

    for (i = 0; i < 10; i++)
        printf("AUTO int i [%d]\n", i);
}

int print_local()
{
    int var = 10;
    return var;

} /* END  print_local function */

int print_static()
{
    static int var = 10; /* VALOR PRESERVADO dentro da funcao */
    var++;

    return var;

} /* END  print_static function */

int print_static_global()
{
    return ++var_static;

} /* END  print_static function */

int print_global()
{
    return var;

} /* END  print_global function */

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
