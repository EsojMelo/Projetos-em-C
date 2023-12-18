#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int c = 1, square = 1, a = 1, b = 1;

    for (a = 1; a < 1000; a++)
    {
        for (b = 1; b < 1000; b++)
        {
            square = a * a + b * b;
            c = sqrt(square);
            if (square % c == 0 && a + b + c == 1000)
            {
                printf("%d² + %d² = %d²\n", a, b, c);
                printf("%d + %d + %d = 1000\n", a, b, c);
                printf("a x b x c = %d\n", a * b * c);
                break;
            }
        }
    if (square % c == 0 && a + b + c == 1000) 
        break;   
    }
    return 0;
}
