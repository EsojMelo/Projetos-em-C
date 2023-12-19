#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define nCells 15

void printCell(char celulas[nCells]);
int winnerSearch(char celulas[nCells], int showCells);
void humano(char celulas[nCells]);
void computador(char celulas[nCells]);

int main(void)
{
    srand(time(NULL));
    char celulas[nCells], letterList[2] = {'O', 'V'};
    char letter = letterList[rand() % 2];
    int jogador = rand () % 2;
    int count = 0;
    char exit = 'y';

    printf("\nPut a cell number and letter 'O' or 'V', for exemple: 2 O\n"
            "don't forget the space between 2 (space) O\n\n");

    do
    {
        count = 0;
        for (int i = 0; i < nCells ; i++)
        {
            celulas[i] = ' ';
        }

        printCell(celulas);

        do
        {   
            if (jogador == 0)
            {
                humano(celulas);
                jogador = 1;
            }
            else
            {
                if (count == 0)
                    celulas[rand() % 15] = letter;
                else
                    computador(celulas);
                jogador = 0;
            }
            printCell(celulas);
            count ++;
            
        }while (count < 15 && winnerSearch(celulas, 0) != 1);

        if (winnerSearch(celulas, 1) == 1)
        {
            if (jogador == 1)
                printf("\nPLAYER WIN!\n");
            else
                printf("\nPC WINS!\n");
        }
        else
            printf("\nNOBODY WIN!\n");

        do
        {
            printf("\nDo you wanna play again? [y - continue | n - exit]: ");
            scanf("%c", &exit);
            exit = tolower(exit);
        } while (exit != 'y' && exit != 'n');
        
    }while(exit != 'n');

    return EXIT_SUCCESS;
}

void printCell(char celulas[nCells])
{
    printf("\n\n");
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

void winnertest(char celulas[nCells])
{
    int stop = 0;
    
    for (int i = 0; i < nCells - 2; i++)
    {
        if (celulas[i] == ' ')
        {
            celulas[i] = 'O';
            if (celulas[i + 1] == 'V')
            {
                stop = 1;
                celulas[i] = 'V';
                break;
            } 
            
            celulas[i] = 'V';
            if (celulas[i + 1] == 'O')
            {
                stop = 1;
                celulas[i] = 'O';
                break;
            }     
        }
    }
}

void computador(char celulas[nCells])
{
    int i = 0, check = 0;
    int i2;
    int i3;
    int path = rand () % 4;
    int side = rand () % 2;

    for (i = 0; i < nCells - 2; i++)
    {
        i2 = i + 1;
        i3 = i + 2;
        if (celulas[i] == 'O' && celulas[i2] == 'V' && celulas[i3] == ' ')
        {
            celulas[i3] = 'O';
            check = 1;
            break;
        }

        else if (celulas[i] == ' ' && celulas[i2] == 'V' && celulas[i3] == 'O')
        {
            celulas[i] = 'O';
            check = 1;
            break; 
        }

        else if (celulas[i] == 'O' && celulas[i2] == ' ' && celulas[i3] == 'O')
        {
            celulas[i2] = 'V';
            check = 1;
            break;
        }  
    }

    if (check == 0)
    {
        if (path == 0)
        {
            for (i = 0; i < nCells - 2; i++)
            {
                i2 = i + 1;
                i3 = i + 2;
                if (celulas[i] == ' ' && celulas[i2] == 'V' && celulas[i3] == ' ')
                {
                    if (side == 0)
                    {
                        celulas[i] = 'V';
                        check = 1;
                    }    
                    else
                    {
                       celulas[i3] = 'V';
                       check = 1; 
                    }
                }
            }
        }

        else if (path == 1)
        {
            for (i = 0; i < nCells - 2; i++)
            {
                i2 = i + 1;
                i3 = i + 2;
                if (celulas[i] == ' ' && celulas[i2] == 'O' && celulas[i3] == ' ')
                {
                    if (side == 0)
                    {
                        celulas[i] = 'O';
                        check = 1;
                    }
                    else
                    {
                       celulas[i3] = 'O';
                       check = 1;
                    }
                    break; 
                }
            }
        }

        else if (path == 2)
        {
            for (i = 0; i < nCells - 2; i++)
            {
                i2 = i + 1;
                i3 = i + 2;
                if (celulas[i] == ' ' && celulas[i2] == ' ' && celulas[i3] == ' ')
                {
                    celulas[i2] = 'V';
                    check = 1;
                    break;
                }
            }
        }

        else
        {
            for (i = 0; i < nCells - 2; i++)
            {
                i2 = i + 1;
                i3 = i + 2;
                if (celulas[i] == ' ' && celulas[i2] == ' ' && celulas[i3] == ' ')
                {
                    celulas[i] = 'O';
                    check = 1;
                    break;
                }
            }
        }   
    }
    if (check == 0)
    {
        winnertest(celulas);
    }
}

void humano(char celulas[nCells])
{
    int chooseCell = 0;
    char letra = ' ';

    do
    {
        printf("\nPlayer > choose a cell where you want to put [0-14] and letter [O ou V]: ");
        scanf("%d %c", &chooseCell, &letra);
        letra = toupper(letra);
        
    }while ((letra != 'V' && letra != 'O') || (chooseCell < 0 && chooseCell > 14) || celulas[chooseCell] != ' ');
    celulas[chooseCell] = letra;

    return;
}

