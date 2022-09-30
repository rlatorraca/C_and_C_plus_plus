/* ============================================================================

    Program: Exemple of FOR LOOP Guess gaming

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

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main()
{

    setlocale(LC_ALL, "fr_Canada");

    int guess, hint, total_tries;

    total_tries = 0;

    printf("Enter a number for guess try: ");
    scanf("%d", &guess);

    system("clear");

    printf("\nStarting game ... \n");

    for (hint = -1; hint != guess;)
    {

        printf("\nTry guess: ");
        scanf("%d", &hint);
        total_tries++;

        if (total_tries > 0 && hint != guess)
            printf("ERROR [%d]\n", total_tries);

        if (total_tries >= 10)
            break;
    }
    if (total_tries <= 10)
        printf("\n+++++ GREAT !!! the number is correct. +++++\n");
    else
        printf("\n+++++ You lose !!! Try again ... +++++\n");

    printf("\n");

    /* Press Enter to exit ... */
    system("read -p '\nPress Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

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