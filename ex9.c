/***************************************************************************
 *   ex9.c                                    Version 20231117.152445      *
 *                                                                         *
 *   Programa que converte uma temperatura de °C para °F                 *
 *   Copyright (C) 2023         by Jose Gabriel Queiroz De Melo            *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Jose Gabriel Queiroz De Melo                                          *
 *   Email: jgqm@poli.br                                                   *
 *   Webpage: http://beco.poli.br/jgqm@poli.br                                                   username                                *
 *   Phone: 81996866268                                                    *
 ***************************************************************************/

/*
 * Instrucoes para compilar:
 * $gcc ex9.c -o ex9.x -Wall -Wextra -g -O0 -DDEBUG=1
 * opcoes extras: -ansi -pedantic-errors
 */

/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142306" */
#define VERSION "20231117.152445" /* Version Number (string) */
#endif

/* Debug */
#ifndef DEBUG /* gcc -DDEBUG=1 */
#define DEBUG 0 /* Activate/deactivate debug mode */
#endif

#if DEBUG==0
#define NDEBUG
#endif
/* #include <assert.h> */ /* Verify assumptions with assert. Turn off with #define NDEBUG */ 

/* Debug message if DEBUG on */
#define IFDEBUG(M) if(DEBUG) fprintf(stderr, "[DEBUG file:%s line:%d]: " M "\n", __FILE__, __LINE__); else {;}

/* limits */
#define SBUFF 256 /* string buffer */

/* ---------------------------------------------------------------------- */
/* Essa função recebe um valor em Celsios e retorna em Fahrenheit
 */
int main (void) 
{
    //variáveis
    int celsius, fahrenheit = 0;
    celsius = 0;
    //Entradas
    printf("\nTemperatura em °C: ");
    scanf("%d", &celsius);
    //processamento
    fahrenheit = celsius * 9 / 5 + 32;
    //saída
    printf("\nA temperatura em Fahrenheit é: %d °F\n", fahrenheit);
    
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */
