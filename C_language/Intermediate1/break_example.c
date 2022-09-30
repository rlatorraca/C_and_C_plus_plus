/* ============================================================================

    Program: Examples using BREAK and CONTINUE

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */
#if HAVE_STROPTS_H
#include <stropts.h>
#endif

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Libs for build _kbhits() */
#include <sys/select.h>

/* ========================================================================= */
/* --- _kbhit FUNCTION --- */
int _kbhit(void)
{
    struct timeval tv;
    fd_set read_fd;

    /* Do not wait at all, not even a microsecond */
    tv.tv_sec = 0;
    tv.tv_usec = 0;

    /* Must be done first to initialize read_fd */
    FD_ZERO(&read_fd);

    /* Makes select() ask if input is ready:
     * 0 is the file descriptor for stdin    */
    FD_SET(0, &read_fd);

    /* The first parameter is the number of the
     * largest file descriptor to check + 1. */
    if (select(1, &read_fd, NULL, /*No writes*/ NULL, /*No exceptions*/ &tv) == -1)
        return 0; /* An error occured */

    /*  read_fd now holds a bit map of files that are
     * readable. We test the entry for the standard
     * input (file 0). */

    if (FD_ISSET(0, &read_fd))
        /* Character pending on stdin */
        return 1;

    /* no characters were pending */
    return 0;
}

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{

    setlocale(LC_ALL, "fr_Canada");

    char i = 0;
    unsigned long j = 0;

    while (i < 15)
    {
        if (i == 10) break;

        i++;
        printf("%d\n\n", i);
    }

    while (1)
    {
        /*a funcao kbhit retorna 0 se uma tecla nao for pressionada */
        if (_kbhit()) break;        

        j++;
        printf("%d\n", j);
    }

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

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