#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    float total = 0, exit;
    float dado[6] = {0, 0, 0, 0, 0, 0};
    float percent0, percent1, percent2, percent3, percent4, percent5;
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            do
            {
                exit = rand () % 6;
                dado[j] ++; 
                printf("dado %d = %f || exit = %f\n", j, dado[j], exit);
            } while(exit > j);              
        }
    }
    
    total = dado[0] + dado[1] + dado[2] + dado[3] + dado[4] + dado[5];
    printf("TOTAL = %f\n", total);
    percent0 = ((total - dado[0]) / total) * 100;
    percent1 = ((total - dado[1]) / total) * 100;
    percent2 = ((total - dado[2]) / total) * 100;
    percent3 = ((total - dado[3]) / total) * 100;
    percent4 = ((total - dado[4]) / total) * 100;
    percent5 = ((total - dado[5]) / total) * 100;

    printf("\nchances dia 1: %.4f%%\n", percent0);
    printf("chances dia 2: %.4f%%\n", percent1);
    printf("chances dia 3: %.4f%%\n", percent2);
    printf("chances dia 4: %.4f%% \n", percent3);
    printf("chances dia 5: %.4f%%\n", percent4);
    printf("chances dia 6: %.4f%%\n", percent5);

    return EXIT_SUCCESS;
}