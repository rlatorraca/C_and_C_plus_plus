/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 2
    Estruturas, Uniões, Enumerações e Definições de Tipo

    Programa simples para usar como base em softwares de cadastro.

    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- STRUCTS --- */
typedef struct                                      /* estrutura para data de aniversário */
{
    short day,                                      /* dia do aniversário */
    month,                                          /* mês do aniversário */
    year;                                           /* ano do aniversário */
} birthday;                                         /* variável birthday */

typedef struct client_struct                             /* estrutura com os dados do cliente */
{
    char name[31];                                  /* string para armazenar o nome */
    char address[41];                               /* string para armazenar o endereço */
    long phone;                                     /* inteiro para armazenar o telefone */
    float job_value;                                /* real para armazenar valor do serviço */
    birthday birthday_date;                         /* estrutura aninhada, para armazenar a data de aniversário */

} client;                                          /* variável cliente */


/* ========================================================================= */
/* --- Protótipo das Funções --- */
void new_client(client *p);                         /* função para solicitar os dados de um novo cliente */
void display(client a);                             /* função para mostrar dados do cliente no console */
void save(client a);                                /* função para armazenar dados do cliente em arquivo binário */


/* ========================================================================= */
/* --- Função Principal --- */
int main(int argc, char *argv[])
{
    client new;                                         /* variável estrutura */

    new_client(&new);                               /* passa como parâmetro para preencher os dados */
    putchar('\n');                                  /* insere nova linha */
    display(new);                                   /* mostra os dados */
    putchar('\n');                                  /* insere nova linha */
    save(new);                                      /* salva em arquivo binário */


    system("read -p '\nPress Enter to continue...[RLSP]\n' key");  /* PAUSE Exceution - LINUX*/
    return 0;                                                               /* retorna 0, se main for executada corretamente */

} /* end main */



/* ========================================================================= */
/* --- new_client --- */
/* solicita os dados do novo cliente */
void new_client(client *c)
{
    printf("Client name: ");                                /* solicita o nome */
    fgets(c->name, sizeof(c->name), stdin);
    //scanf("%30s[^\n]", c->name);                              /* armazena em nome da estrutura cliente */
    printf("Client address: ");                             /* solicita o endereço */
    fgets(c->address, sizeof(c->address), stdin);
    //scanf("%40s[^\n]", c->address);                           /* armazena em endereço da estrutura cliente */
    printf("Client phone number: ");                        /* solicita o telefone */
    scanf("%ld",&c->phone);                                 /* armazena em telefone da estrutura cliente */
    fflush(stdin);
    printf("Value US$: ");                                  /* solicita o valor */
    scanf("%f",&c->job_value);                              /* armazena em serviço valor da estrutura cliente */
    fflush(stdin);
    printf("Birthday date [DD/MM/AAAA]: ");                   /* solicita data de nascimento no formato dd/mm/aaaa */
    scanf("%hd%*c%hd%*c%hd", &c->birthday_date.day,         /* armazena dia */
          &c->birthday_date.month,                                 /* armazena mês */
          &c->birthday_date.year);                                 /* armazena ano */

} /* end new_client */


/* ========================================================================= */
/* --- display --- */
/* mostra valores armazenados */
void display(client c)
{
    printf("Client Name     : %s",c.name);                                     /* imprime nome do cliente */
    printf("Address         : %s",c.address);                                  /* imprime endereço do cliente */
    printf("Telephone       : %ld\n",c.phone);                                   /* imprime telefone do cliente */
    printf("Value US$       : %.2f\n",c.job_value);                              /* imprime valor do serviço */
    printf("Birthday date   : %hd/%hd/%hd\n", c.birthday_date.day,               /* imprime dia do aniversário */
           c.birthday_date.month,                                                       /* imprime mês do aniversário */
           c.birthday_date.year);                                                       /* imprime ano do aniversário */

} /* end display */


/* ========================================================================= */
/* --- save --- */
/* armazena dados do cliente em arquivo binário */
void save(client c)
{
    FILE *file;                                                                     /* ponteiro para arquivo */
    file = fopen("signup.dat", "wb");                                /* abre arquivo cadastro.dat para escrita binária */

    if(file == NULL)                                                                 /* ponteiro está apontando para nada? */
    {                                                                                /* sim */
        printf("ERROR - saving into file\n");                                /* informa o erro */
        system("read -p '\nPress Enter to continue...[RLSP]\n' key");       /* PAUSE Exceution - LINUX*/
        exit(1);                                                               /* sai do programa */

    } /* end if */

    fwrite(c.name, sizeof(char), 30, file);                    /* armazena o nome no arquivo */
    fwrite(c.address, sizeof(char), 40, file);                 /* armazena o endereço no arquivo */
    fwrite(&c.phone, sizeof(long), 1, file);                    /* armazena o telefone no arquivo */
    fwrite(&c.job_value, sizeof(float), 1, file);               /* armazena o valor do serviço no arquivo */
    fwrite(&c.birthday_date.day, sizeof(short), 1, file);       /* armazena o dia do aniversário no arquivo */
    fwrite(&c.birthday_date.month, sizeof(short), 1, file);     /* armazena o mês do aniversário no arquivo */
    fwrite(&c.birthday_date.year, sizeof(short), 1, file);      /* armazena o ano do aniversário no arquivo */

    fclose(file);                                                       /* fecha o arquivo */

    printf("File save successfully !\n");                               /* informa que arquivo foi criado com sucesso */

} /* end save */


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