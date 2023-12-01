#include <stdio.h>
#include <stdlib.h>

void raizMaiorQueUm (float x, float delta);
void raizMenorQueUm (float x, float delta);

int main(void)
{   //variáveis
    //Delta é o valor da máximo da diferença entre o limite superior e inferior
    float delta = 0.001;
    float x = 1;
    while (x != 0)
    {
    printf("\n0 - Para sair");    
    printf("\nEscolha um número para achar a raiz: ");
    scanf("\n%f", &x);

    if (x >= 1)
        raizMaiorQueUm(x, delta);
    else if (x == 0)
        break;
    else if (x < 0)
        printf("\nDigite um valor positivo");
    else
        raizMenorQueUm(x, delta);
    
    }
    return EXIT_SUCCESS;
}


void raizMaiorQueUm(float x, float delta) //Quando número escolhido para achar a raiz é maior ou igual a 1
{
    float ls = x, li = 0, rc; //variáveis e limites

    //processamento dos dados com while e if
    while (ls - li > delta)
    {
        rc = (li + ls)/2;

        if (rc*rc < x)
            li = rc;
        else
            ls = rc;

        //Indica as aproximações feitas
        printf("\n---------------------------------------");
        printf("\nLimite superior: %f", ls);
        printf("\nlimite inferior: %f", li);
        printf("\nDelta aproximado: %f", (ls - li));
        printf("\n---------------------------------------");
    }
    printf("\nNúmero pelo método da bissecção: %.2f\n", ls);
}

void raizMenorQueUm (float x, float delta) //Quando o número é menor que 1
{
    float ls = 1, li = x, rc; //variáveis e limites

    //processamento dos dados com while e if
    while (ls - li > delta)
    {
        rc = (li + ls)/2;

        if (rc*rc < x)
            li = rc;
        else
            ls = rc;

        //Indica as aproximações feitas
        printf("\n---------------------------------------");
        printf("\nLimite superior: %f", ls);
        printf("\nlimite inferior: %f", li);
        printf("\nDelta aproximado: %f", (ls - li));
        printf("\n---------------------------------------");
    }
    printf("\nNúmero pelo método da bissecção: %.2f\n", ls);
}