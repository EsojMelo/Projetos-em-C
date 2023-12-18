#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define nCells 15

void printCell(char celulas[nCells]);
int winnerSearch(char celulas[nCells], int showCells);
void humano(int *jogador, char celulas[nCells]);

int main(void)
{
    char celulas[nCells];
    int jogador = 2;
    int count = 0;

    printf("\nPut a cell number and letter 'O' or 'V', for exemple: 2 O\n"
            "don't forget the space between 2 (space) O\n\n");

    for (int i = 0; i < nCells ; i++)
    {
        celulas[i] = ' ';
    }

    printCell(celulas);

    do
    {   
        humano(&jogador, celulas);
        count ++;
        
    }while (count < 15 && winnerSearch(celulas, 0) != 1);

    if (winnerSearch(celulas, 1) == 1)
        printf("\nPLAYER %d WIN!", jogador);
    else
        printf("\nANYONE WIN!");

    return EXIT_SUCCESS;
}

void printCell(char celulas[nCells])
{
    for (int i = 0; i < nCells ; i++)
        {
            if (i == 0)
                printf("[");

            printf("| %c |", celulas[i]);

            if (i == 14)
                printf("]");
        }
    printf("\n");
    for (int i = 0; i < 15; i++)
    {
        if (i < 10)
            printf("   %d ", i);
        else
            printf("  %d ", i);
    }
    
}


int winnerSearch(char celulas[nCells], int showCells)
{
    for (int i = 0; i < nCells - 2; i++)
    {
        if (celulas[i] == 'O' && celulas[i + 1] == 'V' && celulas[i + 2] == 'O')
        {
            if (showCells == 1)
                printf("\nCells sequence: %d  %d  %d", i, i + 1, i + 2 );
            return 1;
            break;
        }
        
    }
}


void humano(int *jogador, char celulas[nCells])
{
    int chooseCell = 0;
    char letra = ' ';

    if (*jogador == 1)
        *jogador = 2;
    else
        *jogador = 1;

    do
    {
        printf("\nPlayer %d > choose a cell where you want to put [0-14] and letter [O ou V]: ", *jogador);
        scanf("%d %c", &chooseCell, &letra);
        letra = toupper(letra);
        
    }while ((letra != 'V' && letra != 'O') || (chooseCell < 0 && chooseCell > 14));
    celulas[chooseCell] = letra;
    printCell(celulas);

    return;
}