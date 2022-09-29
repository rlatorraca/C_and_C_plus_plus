/*====================================================================================================================================================
    Program: Example of "Data Type" em C

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================+========================================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Sem conidera POINTER, existem 4 TIPOS BASICOS de dados

            a) char => armazena INTEIROS e CARACTERES (1 byte)
                1 byte (8 bits) [-128 <-> 127]

            b) int => armazena INTEIROS (2 ou 4 bytes)
                2 bytes (16 bits) [ -32.768 <-> 32767]
                4 bytes (32 bits) [ -2.147.483.648 <-> 2.147.483.647]

            c) float => armazena REAIS (2 ou 4 bytes)
                6 digitos de precisao

            d) double => armazena REAIS com MAIOR PRECISAO ( 8 bytes)
                10 a 12 digitos (depender do SO)

    */
    char var_char1 = 86;
    char var_char2 = 'R';

    int int1 = 32767;
    long int long_int1 = 184467440737000;

    float float1 = 2147483647;
    float float2 = -2147483647;

    printf("char size is %d\n", sizeof(char));
    printf("int size is %d\n", sizeof(int));
    printf("unsigned int size is %d\n", sizeof(unsigned int));
    printf("short int size is %d\n", sizeof(short int));
    printf("long int size is %d\n", sizeof(long int));
    printf("float size is %d\n", sizeof(float));
    printf("double size is %d\n", sizeof(double));

    printf("var_char1 = %c \t %d\n", var_char1, var_char1);
    printf("var_char2 = %c \t %d\n\n", var_char2, var_char2);
    printf("int1 = %d\n\n", int1);
    printf("float1 = %f\n", float1);
    printf("float2 = %f\n", float2);

    /*
        Existem 4 MODIFICADORES:
            a) unsigned => determina que o tipo sera APENAS POSITIVO[+] (sem sinal negativo), sendo para
                - INT: 2 bytes [ 0 <-> 65.535]
                       4 bytes [ 0 <-> 4.294.967.296]
                - CHAR [0 <-> 255]

                OBS: afim de garantir
                    a) um int de 2 bytes usamos => unsigned short int
                    b) um int de 4 bytes usamos => unsigned long int

            b) signed => determina queo tipot ter AMBOS os SINAIS (positivo[+] e negativo[-]).
                - Pode ser usado em algumas implementacoes onde char por padrao nao tem sinal
                - ja esta implicito nas variavaies/atributos

            c) short => usado para limiter em 2 bytes o tipo INT
                - importante para portabilidade entre diferentes maquinas

            d) long => usado para estabelecer o limite de 8 bytes [1.84467440737e+19] para o tipo INT e tambem para aumentar a precisao do DOUBLE


    */

    /* INT implicito
         unsigned var_name;         // INT +                    2 bytes (SO) =  0 <-> 65.535 || 4 bytes (SO) [ 0 <-> 4.294.967.296]
         short var_name;            // INT 2 bytes (+/-)        [ -32.768 <-> 32767]
         long var_name;             // INT 4 bytes (+/-)        [ -2.147.483.648 <-> 2.147.483.647]
         unsigned short var_name    // INT + 2 bytes            [ 0 <-> 65.535]
         unsigned long var_name     // INT + 4 bytes            [ 0 <-> 4.294.967.296]

    */

    unsigned char var_char3 = 240;
    unsigned int int2 = 400000;

    double double1 = 4294967.296;
    double double2 = -42949.67;

    printf("var_char3 = %c \t %d\n", var_char3, var_char3);

    printf("unsigned int2= %d\n", int2);
    printf("unsigned int2 octal = %o\n", int2);
    printf("unsigned int2 hexa = %X\n\n", int2);

    printf("double double1 = %f\n", double1);
    printf("double double2 = %f\n", double2);
    /*
        Formatos de READ and WRITE (letras apos o %)

            %c = char               (para 1 unico caracter)
            %d = int                (para um INT em base DECIMAL) Obs: tmbem pode ser usar %i
            %o = int                (para um INT em base OCTAL)
            %x = int                (para um INT em base HEXADECIMAL [letras minusculas [a-f])
            %X = int                (para um INT em base HEXADECIMAL [letras MAIUSCULAS] [A-F])
            %f = float/double       (para numeros REAIS)
            %e = float              (para notacao cientifaica com 'e' minusculo)
            %E = float              (para notacao cientifaica com 'e' MAIUSCULO)

            %c	Character
            %d	Signed integer
            %e or %E	Scientific notation of floats
            %f	Float values
            %g or %G	Similar as %e or %E
            %hi	Signed integer (short)
            %hu	Unsigned Integer (short)
            %i	Unsigned integer
            %l or %ld or %li	Long
            %lf	Double
            %Lf	Long double
            %lu	Unsigned int or unsigned long
            %lli or %lld	Long long
            %llu	Unsigned long long
            %o	Octal representation
            %p	Pointer
            %s	String
            %u	Unsigned int
            %x or %X	Hexadecimal representation
            %n	Prints nothing
            %%	Prints % character


          Formatos de READ and WRITE nos MODIFICADORES (letras apos o %) => COMPILADORES MODERNOS
            %hd = short int         short INT em base DECIMAL
            %ld = long int          long INT em base DECIMAL
            %hu = unsigned short    short INT + (2 bytes)
            %u  = unsigned int      INT +   (2 ou 4 bytes)
            %lu = unsigned long     long INT + (4 bytes)
    */

    /* Press Enter to continue ... */
    system("read -p 'Press Enter to continue...[RLSP]' key");

    return 0;
}