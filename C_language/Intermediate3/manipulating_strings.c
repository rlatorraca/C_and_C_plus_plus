/* ============================================================================

    Program: Manipulating Strings

    Para passar uma string como parâmetro para uma função, pode-se recorrer ao
    mesmo método utilizado com vetores, pois utilizamos vetores para armazenas
    as strings.

    void func(char str[]); => protótipo da função que recebe a string

    No entanto, é mais comum utilizarmos o operador *. Este operador é a
    designação de um ponteiro em C, que iremos estudar detalhadamente no Módulo 8.
    Por enquanto, entenda que podemos utilizar * para passar tanto strings como
    vetores, para as funções que desenvolvermos

    void func(char *str);
        => protótipo da função que recebe a string com o
    operador *. A passagem através da função principal, é exatamente igual
    ao Box 1.

    char *sret(char *str);
        => protótipo da função que recebe uma string e
    também retorna uma string.

    A biblioteca string.h apresenta diversas funções úteis para manipulação de strings,
    das quais, podemos destacar:
        - strcat: concatena duas strings.
        - strcmp: compara duas strings.
        - strcpy: copia o conteúdo de uma string para outra.
        - strlen: devolve o tamanho da string sem levar o caractere nulo em consideração.

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
/* --- FUNCTIONS PROTOTYPES --- */
int strlen(char *s);
int strvowel(char *s);
char *strcpy(char *dest, char *orig);
char *strcat(char *dest, char *orig);
char *strrev(char *str);
int strcmp(char *s1, char *s2);
int strnumb(char *s);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{

    setlocale(LC_ALL, "fr_Canada");

    char str1[50] = "Linguagem C 1234 ";
    char str2[50] = "RLSP - Rodrigo Latorraca de Sanctis Pires";
    char str3[50] = "Linguagem C September ";
    char str4[50] = "2002";
    char com[50];

    printf("strlen example: %d\n", strlen(str1));
    printf("strvowel example:%d\n\n", strvowel(str1));

    printf("strlen example: %d\n", strlen(str2));
    printf("strvowel example:%d\n\n", strvowel(str2));

    printf("strcpy example: %s\n", strcpy(str1, "Linguagem C 2022"));
    printf("strcpy example: %s\n\n", strcpy(str4, str2));

    printf("strcat example: %s\n", strcat(str3, str4));
    printf("strcat example: %s\n\n", strcat(str2, str1));

    printf("strnumb example:%d\n", strnumb(str1));
    printf("strnumb example:%d\n\n", strnumb(str2));

    printf("strrev example:%s\n", strrev(str1));
    printf("strrev example:%s\n\n", strrev(str2));

    while (1)
    {
        printf("Novo comando: ");
        fgets(com, (int)sizeof(com), stdin);
        com[strcspn(com, "\n")] = 0; // Retira o ENTER incluido pelo fgets

        if (!strcmp(com, "BIP"))
            putchar('\a');
        else if (!strcmp(com, "CLEAR"))
            system("read -p 'Press Enter to exit...[RLSP]\n' key");
        else if (!strcmp(com, "ESC"))
            break;
    }

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

// Verifica quantos Caracteres tem a STRING (salvo o NULL ou \0)
int strlen(char *s)
{
    register int i = 0;

    while (s[i] != '\0')
        i++;

    return i;
}

// Verifica quantas VOGAIS tem a STRING
int strvowel(char *s)
{
    register int i = 0,
                 vowel = 0;

    while (s[i] != '\0')
    {
        // printf("%c\n", s[i]);
        switch (s[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vowel++;
        }
        i++;
    }

    return vowel;
}

// Copia uma STRING para dentro da OUTRA (Ficando ambas semelhantes)
char *strcpy(char *dest, char *orig)
{
    register int i;

    for (i = 0; orig[i] != '\0'; i++)
        dest[i] = orig[i];

    dest[i] = '\0'; // adiciono NULL or \0 no final da string

    return dest;
}

char *strcat(char *dest, char *orig)
{
    register int i = 0, len = strlen(dest);

    // DEST = 123 -> ORIGIN = 456
    // Output: 1234566
    //
    // dest[0+ leng Dest] => dest[3]
    // dest[3] = \0
    // dest[3] = Origin[0] => 4
    // dest[3+1] = Origin[0+1] => 5
    // dest[3+2] = Origin[0+2] => 6
    // dest[3+3] = Origin[0+3] => \0

    while (dest[i + len] = orig[i])
        i++;

    return dest;
}

/* Inverte a String */
char *strrev(char *str)
{
    register int i, len;
    char aux;

    for (i = 0, len = strlen(str) - 1; i < len; i++, len--)
    {
        aux = str[i];
        str[i] = str[len];
        str[len] = aux;
    }

    return str;
}

/* Compara se as strings sao iguais */
int strcmp(char *s1, char *s2)
{
    register int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;

    return ((unsigned char)s1[i] - (unsigned char)s2[i]); // se retornar ZERO sao iguais
}

/* Retorna se existe DIGITOS/NUMEROS e retorna a quantidade de DIGITOS/NUMERO*/
int strnumb(char *s)
{
    register int i = 0, num = 0;

    while (s[i] != '\0')
    {
        i++;
        if (isdigit(s[i]))
            num++;
    }

    return num;
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
