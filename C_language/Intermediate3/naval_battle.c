/* ============================================================================

    Program: Naval Battle Game

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* para utilizar a função time */

/* ========================================================================= */
/* --- Protótipo das Funções --- */
void naval(char b[][10], char loading); /* função para desenhar a matriz da batalha */
void new_seed();                        /* função para gerar números aleatórios */
unsigned map_col(char col);             /* converte coluna letra em coluna número */

/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
    char boats[8][10], b_print[8][10] = {0}, /* guarda as posições dos inimigos */
        opt = 'p',                           /* opção do usuário iniciada em 'j' */
        draw = 1,
                       level = 5, /* flag para novos sorteios */
        col = 0;                  /* caracteres das colunas */

    unsigned num,   /* armazena números aleatórios */
        row = 0,    /* número das linhas */
        hits = 0,   /* número de alvos atingidos */
        errors = 0; /* número de erros cometidos */

    register int i, j; /* variáveis para iteração */

    do /* loop para sorteio */
    {
        if (draw)            /* flag sort setada? */
        {                    /* sim */
            system("clear"); /* limpa a tela */
            new_seed();      /* aplica uma semente randômica para o sorteio */

            for (i = 0; i < 8; i++) /* varre as 8 linhas */
            {
                for (j = 0; j < 10; j++) /* varre as 10 colunas */
                {
                    num = rand() % 100 + 1; /* num recebe um número aleatório de 1 a 100 */

                    if (num % 2)
                    {
                        boats[i][j] = 0x24; /* se o número for ímpar, insere um "inimigo" */
                        b_print[i][j] = 0x24;
                    }
                    else
                    {
                        boats[i][j] = 0x20; /* se o número for par, insere um espaço em branco */
                        b_print[i][j] = 0x24;
                    }

                } /* end for anin. */

            } /* end for */

            naval(boats, 1); /* atualiza matriz da batalha */

        } /* end if sort */

        else /* se a flag sort for falsa... */
        {
            printf("Invalid Option\n"); /* informa opção inválida */
            draw = 1;                   /* seta flag para novo sorteio */
        }

        printf("\nYou can try : %d times\n", level);
        printf("(D)raw again\n"); /* s para sortear novamente */
        printf("(L)evel\n");      /* l escolher o level para jogar */
        printf("(P)lay!\n");      /* j para jogar */
        printf("(E)xit!\n>>> ");  /* sair  para jogar */
        scanf(" %c", &opt);       /* lê a opção */

        if (opt != 'd' && opt != 'D')
            draw = 0; /* se for um caractere diferente de d ou D, limpa flag de sorteio */

        if (opt == 'l' || opt == 'L')
        {
            printf("\n[20] lives | [10] lives | [5] lives (standard)\n"); /* j para jogar */
            scanf(" %d", &level);
            draw = 1;
        }

        if (opt == 'e' || opt == 'E')
        {
            system("clear");
            system("read -p 'Exiting ....Press Enter to exit...[RLSP]\n' key"); /* pausa */
            exit(0);
        }
    } while (opt != 'p' && opt != 'P'); /* encerra o loop quando digitado p e P para jogar */

    system("clear");                                          /* limpa a tela */
    naval(b_print, 0);                                        /* atualiza matriz da batalha */
    printf("HIT TARGETS: %3d | ERRORS: %3d\n", hits, errors); /* imprime acertos e erros */

    while (1) /* loop infinito */
    {

        printf("Enter a position to attack: "); /* solicita a posição para disparo */
        scanf(" %c%d", &col, &row);             /* lê a coluna e a linha */

        system("clear"); /* limpa a tela */

        if (boats[row - 1][map_col(col)] == '$') /* se a posição indicada coincidir com um alvo... */
        {
            boats[row - 1][map_col(col)] = '*'; /* atualiza posição com * para indicar o alvo abatido */
            b_print[row - 1][map_col(col)] = '*';
            hits++;       /* incrementa acertos */
            printf("\a"); /* sinal sonoro */

        }    /* end if boats */
        else /* se não houve um alvo na posição... */
        {
            errors++;     /* incrementa os erros */
            printf("\a"); /* sinal sonoro */
            printf("\a"); /* sinal sonoro */
            printf("\a"); /* sinal sonoro */

            if (errors > level) /* se errar mais de 5 vezes... */
            {
                printf("WE'VE BEEN DEFEATED !!!\n");                        /* o jogador perde */
                for (i = 0; i < 5; i++)                                     /* repete 5 alertas sonoros */
                    printf("\a");                                           /* sinal sonoro */
                system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* pausa */
                exit(0);                                                    /* interrompe programa */

            } /* end if erros */

        } /* end else */

        naval(b_print, 2);                                        /* atualiza matriz de batalha */
        printf("HIT TARGETS: %3d | ERRORS: %3d\n", hits, errors); /* imprime acertos e erros */

    } /* end while */

    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/
    return 0;                                                   /* retorna 0, se main for executada corretamente */

} /* end main */

/* ========================================================================= */
/* --- FUNCTIONS --- */

/* ========================================================================= */
/* --- DRAW NAVAL MATRIX --- */
void naval(char b[][10], char loading)
{
    putchar('\n');
    printf("       A   B   C   D   E   F   G   H   I   J  \n");
    printf("     -----------------------------------------\n");
    if (loading == 1)
    {
        for (unsigned char i = 0; i < 8; i++)
        {
            printf("  %d  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", i + 1,
                   b[i][0], b[i][1], b[i][2], b[i][3], b[i][4], b[i][5], b[i][6], b[i][7], b[i][8], b[i][9]);
            printf("     -----------------------------------------\n");
        }
    }
    else if (loading == 0)
    {
        for (unsigned char i = 0; i < 8; i++)
        {
            printf("  %d  |   |   |   |   |   |   |   |   |   |   |\n", i + 1);
            printf("     -----------------------------------------\n");
        }
    }
    else if (loading == 2)
    {
        for (unsigned char i = 0; i < 8; i++)
        {
            for (unsigned char j = 0; j < 10; j++)
            {
                if (b[i][j] != 0x2A)
                {
                    b[i][j] = 0x20;
                }
            }
            printf("  %d  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", i + 1,
                   b[i][0], b[i][1], b[i][2], b[i][3], b[i][4], b[i][5], b[i][6], b[i][7], b[i][8], b[i][9]);
            printf("     -----------------------------------------\n");
        }
    }

    putchar('\n');

} /* end naval */

/* ========================================================================= */
/* --- GENERATE RANDOM NUMBERS --- */
void new_seed()
{
    unsigned long capture;
    time(&capture);           // pega uma semente com base no relogio do computador
    srand((unsigned)capture); // gera as sementes de forma aleatoria

} /* end new_seed */

/* ========================================================================= */
/* --- CONVERT A CHARACTER [A-J] TO NUMBER INTO MATRIX --- */
unsigned map_col(char col)
{
    switch (col)
    {
    case 'a':
    case 'A':
        return 0;
        break;
    case 'b':
    case 'B':
        return 1;
        break;
    case 'c':
    case 'C':
        return 2;
        break;
    case 'd':
    case 'D':
        return 3;
        break;
    case 'e':
    case 'E':
        return 4;
        break;
    case 'f':
    case 'F':
        return 5;
        break;
    case 'g':
    case 'G':
        return 6;
        break;
    case 'h':
    case 'H':
        return 7;
        break;
    case 'i':
    case 'I':
        return 8;
        break;
    case 'j':
    case 'J':
        return 9;
        break;

    } /* end switch */

} /* end map_col*/

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
