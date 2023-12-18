#include <stdio.h>
#include <stdlib.h>

int countDivisors(long num);

int main(void) 
{
    long i = 1;
    long sum = 1;

    while (countDivisors(sum) <= 500) 
    {
        i++;
        sum += i;
    }

    printf("\nO numero e: %ld", sum);

    return 0;
}

int countDivisors(long num) 
{
    int count = 0;
    for (long i = 1; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            count += (i * i == num) ? 1 : 2;
        }
    }
    return count;
}