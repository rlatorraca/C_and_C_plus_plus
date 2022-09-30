/* ============================================================================

    Program: Projeto de um voltimetro com uma funcao TRUE RMS. Primeiramente,
    voce deve projetar uma funcao em C que receba o numero de pontos de tensao
    no dominio discreto, para o calculo dos Vrms, conforme a equacao

    Vrms = √ (1/n) Σ v²(i)

    n = amostras

    Author: RLSP
    Created: September 2022
    Modified: September 2022

============================================================================ */

/* ========================================================================= */
/* --- LIBRARIES --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*---- CONSTANTS ----*/
#define size_samples 10

/* ---- FUNCTIONS PROTOTYPES ---- */
float true_rms(float voltage[]);

/* ========================================================================= */
/* --- MAIN FUNCTION --- */
int main() /* int de returna em Funcoes em C é OPTIONAL*/
{
    setlocale(LC_ALL, "fr_Canada");

    float voltage[size_samples] = {1.5, 2.3, 1.9, 3.6, 2.35, 2.01, .09, 1.25, 6.8, 8.9};

    printf("Vrms = %.4f Volts\n", true_rms(voltage));

    /* Press Enter to exit ... */
    system("read -p 'Press Enter to exit...[RLSP]\n' key"); /* PAUSE Exceution - LINUX*/

    /*  system("PAUSE"); PAUSE Exceution - WINDOWS*/
    return 0; /* return 0, if MAIN function is executed correctly  */

} /* END  main function */

/* ----- FUNCTIONS ---- */
float true_rms(float voltage[])
{
    float rms = 0.0;
    register int i = 0;

    /* Faz todos ao quadrado e guarda no vetor voltage*/
    for (i; i < size_samples; i++)
    {
        voltage[i] *= voltage[i]; /* voltage[i] = voltage[i] * voltage[i] */
    }

    /* Faz a somatoria de todas as voltages existentes no vetor */
    for (i = 0; i < size_samples; i++)
    {
        rms += voltage[i]; /* rms = rms * voltage[i] */
    }

    /* Divide a somotoria de todas as voltagens pelo total de amostras */
    rms /= size_samples; /* rms = rms / size_samples */

    return sqrtf(rms);
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
