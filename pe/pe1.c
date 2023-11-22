/* ----------------------------------------------- */
/* pe1.c
* Descricao: somar os números divisíveis por 3 e 5 menores que 1000
* Copyright (C) Jose Gabriel Queiroz De Melo, 2019
* Licenca GNU/GPL v2.0
* Este programa nao tem QUALQUER GARANTIA
* Autor: Jose Gabriel Queiroz de Melo <@EsojMelo>
* Data: 2023 -11 -11
*
*/
/* ----------------------------------------------- */
/* includes */

#include <stdio.h>

/* ----------------------------------------------- */
/* defines */

/* ----------------------------------------------- */
/* Descricao: somar os números divisíveis por 3 e 5 menores que 1000
*/

int main(void)
{//variáveis de entrada
    int i = 1;
    int soma = 0;
    printf("0");
//processamento
    while (i < 1000)
    {

    if (i % 3 == 0 || i % 5 == 0) 
    {
        printf("\n%d", i);
        soma = soma + i;
    }
    
    i = i + 1;

    }
    //print da soma dos resultados
    printf("\nsoma dos números divisíveis por 3 e 5 é: %d", soma);

    return 0;
}
/* ----------------------------------------------- */
/* vi:set ai et ts=4 tw=0 sw=4 wm=0 cc=54 fo=croql:*/
/* C config for Vim modeline by Dr. Beco v.190727 */
