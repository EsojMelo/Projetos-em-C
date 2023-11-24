#include <stdio.h>
#include <stdlib.h>

int somaDosQuadrados();
int quadradoDaSoma();

int main(void)
{
    
    int difference = quadradoDaSoma - somaDosQuadrados;
    
    printf("\nQuadrado da soma(0 a 100): %d", quadradoDaSoma());
    printf("\nSoma dos quadrados(0 a 100): %d", somaDosQuadrados());
    printf("\nQuadrado da Soma - Soma dos Quadrados = %d\n", difference);

    return EXIT_SUCCESS;
}



int somaDosQuadrados()
{
    int i, quadrados = 0;
    for (i = 0; i <= 100; i++)
    {
      quadrados += i * i;  
    }
    
    return quadrados;
}

int quadradoDaSoma()
{
    int i, quadradoSoma = 0;
    for (i = 0; i <= 100; i++)
    {
        quadradoSoma += i;
    }
    quadradoSoma *= quadradoSoma;

    return quadradoSoma;   
}