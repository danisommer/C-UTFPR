#include <stdio.h>
#include <stdlib.h>
#define LIN 6
#define COL 6

int main ()
{
    int matriz[LIN][COL], i, j, lin = 2, col = 3, soma = 0;

    for(i=0; i<LIN; i++)
        for(j=0; j<COL; j++)
            matriz[i][j]=rand()%20;

    for(i=0; i<LIN; i++)
    {
        for(j=0; j<COL; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");

    for(i=0; i < LIN; i++)
        soma+=matriz[i][col];

    for(i=0; i < COL; i++)
        soma+=matriz[lin][i];
    
        
    soma-=matriz[lin][col];

    printf("%d", soma);
    return 0;
}