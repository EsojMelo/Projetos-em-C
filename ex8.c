/***************************************************************************
 *   ex8.c                                    Version 20231114.143547      *
 *                                                                         *
 *   Divisão de dois números em linguagem C                              *
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
 * $gcc ex8.c -o ex8.x -Wall -Wextra -g -O0 -DDEBUG=1
 * opcoes extras: -ansi -pedantic-errors
 */

/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* ---------------------------------------------------------------------- */
//Inicio da função

int main(void)
{
    float numero1,numero2,div;
    printf("\nEscolha o dividendo: ");
    scanf("%f",&numero1);
    printf("\nEscolha o divisor: ");
    scanf("%f",&numero2);
    //tratando erro de divisãp por 0
    while(numero2 == 0)
    {
        printf("\nNão é possível dividir um número por zero");
        printf("\nDigite outro valor: ");
        scanf("%f",&numero2);
    }
    //processamento
    div = numero1 / numero2;
    printf("\nA divisão entre esses valores é: %.2f\n",div);

    return EXIT_SUCCESS;
}

#define SBUFF 256 /* string buffer */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */

