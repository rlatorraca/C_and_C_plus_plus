/* ============================================================================

    Program: Interpreter using String and C language

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
#include <unistd.h>
#include <ctype.h>

/* ========================================================================= */
/* --- FUNCTION PROTOTYPE --- */

void help();
void run_app(int repeat_times, char *run, int sound);
void change_txt(char *text);
char *toUppercase(char *word);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    char command[15] = "";
    char text[40] = "-----";
    unsigned repeat_times = 1;

    while (1)
    {
        setbuf(stdin, NULL);
        printf("\nInput command: ");
        fgets(command, (int)sizeof(command), stdin);

        command[strcspn(command, "\n")] = 0; // Retira o ENTER incluido pelo fgets

        strcpy(command, toUppercase(command));

        if (!strcmp(command, "HELP"))
        {
            help();
            continue;
        }

        if (!strcmp(command, "RUN"))
        {
            run_app(repeat_times, text, 0);
        }

        if (!strcmp(command, "RUN SOUND"))
        {
            run_app(repeat_times, text, 1);
        }

        if (!strcmp(command, "CLEAR"))
        {
            system("clear");
            continue;
        }

        if (!strcmp(command, "CLEAR ALL"))
        {
            strcpy(text, "-----");
            repeat_times = 1;
            system("clear");
            continue;
        }

        if (!strcmp(command, "TXT"))
        {
            setbuf(stdin, NULL);
            printf("\t=>");
            fgets(text, (int)sizeof(text), stdin);

            text[strcspn(text, "\n")] = 0; // Retira o ENTER incluido pelo fgets

            if ((int)strnlen(text, 50) > 39)
            {
                printf("\t+++++ Error !!! Maximum 40 characteres +++++\n");
                continue;
            }
        }

        if (!strcmp(command, "REP"))
        {
            printf("\t=>");
            scanf("%u", &repeat_times);
            if (repeat_times < 1 || repeat_times > 999)
            {
                printf("\t+++++ Error !!! Choose a number between [0 - 999] +++++\n");
                continue;
            }
        }

        if (!strcmp(command, "EXIT"))
        {
            printf("\n\tExiting....in 5 seconds....Thanks for using\n");
            sleep(5);
            system("clear");
            break;
        }
    }

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is exectued correctly  */

} /* END  main function */

/* ========================================================================= */
/* --- FUNCTIONS --- */

void help()
{
    printf("\n\tRLSP SIMPLE INTERPRETER 1.0\n\n");
    printf("\n\tCOMMANDS:\n");
    printf("\tRUN\t\t\trun the interpreter\n");
    printf("\tRUN SOUND\t\trun the interpreter with \"BIPS\"\n ");
    printf("\tREP\t\t\tnumber of times printing text. argument: 000 to 999\n");
    printf("\tTXT\t\t\tupdate text. argument: any text you want\n");
    printf("\tCLEAR\t\t\tclear screen without lose the data\n");
    printf("\tCLEAR ALL\t\tclear screen and erase data\n");
    printf("\tEXIT\t\t\tend interpreter\n");
    printf("\n\tRLSP Inc, 2022\n\n");
}

void run_app(int repeat_times, char *run, int sound)
{
    for (char i = 0; i < repeat_times; i++)
    {
        char beep[] = "BEEP !!!";
        if (sound)
            printf("\t[%3d] %s\a\t%s\n", i + 1, run, beep);
        else
            printf("\t[%3d] %s\n", i + 1, run);
    }
}

char *toUppercase(char *word)
{
    int len = strlen(word);

    // Allocate space for new string
    char *upper = (char *)malloc(sizeof(char) * (len + 1));

    // Add null terminator to string
    upper[len] = '\0';

    // Convert characters to uppercase one by one
    for (int i = 0; i < len; i++)
    {
        upper[i] = toupper(word[i]);
    }

    return upper;
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
