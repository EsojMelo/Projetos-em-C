#include <stdio.h>
#include <stdlib.h>

int reversor(int multreversor);


int main(void)
{
    int numero1, numero2, mult;
    numero1 = 900; 
    numero2 = 900;

    while (numero1 < 1000)
    {
        if (numero2 < 1000)
        {
            mult = numero1 * numero2;
            
            if (reversor(mult) == mult)
            {
                printf("\n%d x %d: %d\n", numero1, numero2, mult);
            }

            numero2 = numero2 + 1;
        }

        else
        {
            numero2 = 900;
            numero1 = numero1 + 1;
        }
        
    }

    return 0;
}


int reversor(int multreversor)
{
    int reverse = 0;
    while (multreversor > 0)
    {
        reverse = reverse * 10 + multreversor % 10;
        multreversor /= 10;
    }
    
    return reverse;
}