#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j = 0, numeros = 20;
    int lista[21] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    while (j != 21)
    {
        j = 0;
        while (numeros % lista[j] == 0)
        {
            j ++;
            if (j == 21)
            {
                printf("\nO número divisível é: %d", numeros);
                break;
            }
            
        }
        numeros ++;
    }
    
    return EXIT_SUCCESS;
}
