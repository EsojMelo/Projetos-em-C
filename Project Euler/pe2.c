#include <stdio.h>

//fazer uma soma dos números pares da sequência de Fibonacci até 4 milhões.

int main(void)
{
    // variáveis
    long int i = 1;
    long int ant = 0;
    long int soma = 0, pos = 0;
    //processamento
    while (pos <= 4000000000 )
    {
        pos = i + ant;
        if (pos > 4000000)
        {
            break;
        }
        ant = i;
        i = pos;
        if (i % 2 == 0)
        {
            soma = i + soma;
        }
    
    }
    //print da soma dos valores
    printf("\nsoma: %d\n ", soma);
    
    return 0;
}
