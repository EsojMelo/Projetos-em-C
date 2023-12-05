#include <stdio.h>
#include <math.h>

#define n 2000001

int main(void)
{
    long long i, j, sum;
    static int primes[n];

    i = 0;
    j = 0;
    sum = 0;

    for (i = 0; i <= n; i++)
    {
        primes[i] = 1;
    }
    
    for (i = 2; i <= sqrt(n); i++)
    {
        if (primes[i] == 1)
        {
            for (j = i; i * j <= n; j++)
            {
                primes[i * j] = 0;
            }
            
        }
    }

    for (i = 2; i < n; i++)
    {
        if (primes[i] == 1)
        {
            sum += i;
        }    
    }
    
    printf("The sum of primes numbers: %lld", sum);

    return 0;
}
