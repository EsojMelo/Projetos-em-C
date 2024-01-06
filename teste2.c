#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    float total = 1000000, exit;
    float dado[6] = {0, 0, 0, 0, 0, 0};
    
    for (int i = 0; i < total; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            exit = rand () % 6;
            if (exit <= j)
            {
                dado[j] ++;
                break;
            }              
        }
    }
    
    printf("\nTOTAL = %.0f\n", total);

    for (int i = 0; i < 6; i++)
    {
        printf("Vezes que caiu no dia %d : %.0f\n", i + 1,dado[i]);
    }

    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("chances dia %d: %.4f%%\n", i + 1,((dado[i]) / total) * 100);
    }
    

    return EXIT_SUCCESS;
}