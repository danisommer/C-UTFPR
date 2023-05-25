#include <stdio.h>
#include <stdlib.h>
#define N 6

int main ()
{
    int i, j, soma;
    int tabuleiro [N][N] = {{0,0,1,0,0,0},
                            {1,9,9,9,9,9},
                            {0,9,9,9,9,9},
                            {0,9,9,9,9,9},
                            {1,9,9,9,9,9},
                            {1,9,9,9,9,9}};

    for(i=1; i<N; i++) 
        for(j=1; j<N; j++)
        {
            soma = tabuleiro[i-1][j-1]+tabuleiro[i][j-1]+tabuleiro[i-1][j];
            if(soma>=2)
                tabuleiro[i][j]=0;
            else 
                tabuleiro[i][j]=1;
        }
    for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
                printf("%d ", tabuleiro[i][j]);
            printf("\n");
        }
    return 0;
}