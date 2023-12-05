#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long i, j, count, sum;
    count = 0;
    i = 0;
    j = 0;
    sum = 0;

    while (count < 400)
    {
        count = 0;
        i++;
        sum += i; 

        for ( j = 1; j <= sum; j++)
        {
            if (sum % j == 0)
            {
                count++;
            }
        
        }
    }

    printf("\nO numero e: %lld", sum);

    return 0;
}
