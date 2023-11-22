/***************************************************************************
 *   pe3.c                                    Version 20231121.153839      *
 *                                                                         *
 *   Achar o maior fator primo do número 600851475143.                    *
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
 * $gcc pe3.c -o pe3.x -Wall -Wextra -g -O0 -DDEBUG=1
 * opcoes extras: -ansi -pedantic-errors
 */

/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* ---------------------------------------------------------------------- */
/* Realiza divisoes ate achar o numero escolhido ser unitário e encontrar o maior valor primo do mesmo
 */

int main()
{
    long int numero = 600851475143;
    long int divisoes = 1;
    long int maiorprimo = 1;
    
    while (numero != 1)
    {
        if (numero % divisoes != 0)
        {    
            divisoes ++;
        }
        
        else if (numero == divisoes)
            break;
            
        else
        {
            numero = numero / divisoes;
            maiorprimo = numero;
            divisoes ++;
        }
    }
    
    printf("\n%ld\n", maiorprimo); 
    
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */

