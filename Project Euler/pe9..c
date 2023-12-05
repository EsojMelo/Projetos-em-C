#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int c = 1, square = 1;

    for (int a = 1; a < 1000; a++)
    {
        for (int b = 1; b < 1000; b++)
        {
            square = a * a + b * b;
            c = sqrt(square);
            if (square % c == 0 && a + b + c == 1000)
            {
                printf("%d + %d + %d = 1000\n", a, b, c);
                printf("a *xb x c = %d\n", a * b * c);
            }
        }
        
    }
    return 0;
}
