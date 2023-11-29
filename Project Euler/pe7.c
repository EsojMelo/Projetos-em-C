#include <stdio.h>

int main(void)
{
    long count, currentNumber, primeCount;
    
    primeCount = 1;
    
    for (currentNumber = 3; primeCount != 10001; currentNumber = currentNumber + 2) //currentNumber = currentNumber + 2 to skip out even numbers
    {
        for (count = 3; count < currentNumber; count = count + 2) //For Optimal performace, use "count < sqrt(currentNumber)"
        {
            if (currentNumber % count == 0)
                break;
        }
        
        if (count == currentNumber)
            primeCount++;
    }
    
    printf("10001st Prime number: %li", count);
    return 0;
}