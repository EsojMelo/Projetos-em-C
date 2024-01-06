#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    float lados[6];
}dado;

int main(void)
{
    dado dado1 = {{0,0,0,0,0,0}};
    srand(time(NULL));
    float total = 100000, exit;
    
    for (int i = 0; i < total; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            exit = rand () % 6;
            if (exit <= j)
            {
                dado1.lados[j] ++;
                break;
            }              
        }
    }
    
    printf("\nTOTAL = %.0f\n", total);

    for (int i = 0; i < 6; i++)
    {
        printf("Vezes que caiu no dia %d : %.0f\n", i + 1,dado1.lados[i]);
    }

    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("chances dia %d: %.4f%%\n", i + 1,((dado1.lados[i]) / total) * 100);
    }
    

    return EXIT_SUCCESS;
}