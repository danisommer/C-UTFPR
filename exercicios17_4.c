#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 2

int main ()
{
    int matriz1[M][N] = {{-1,3},
                         {4, 2},
                         {6, 3}};
                        
    int matriz2[N][M] = {{1,2,4},
                         {3,4,1}};
    int i, j, k, soma;
    
    for(i=0; i<M; i++)
    {
       for(j=0; j<M; j++)
        {
            soma = 0;           
            for(k=0; k<N; k++)
                soma+= matriz1[i][k]*matriz2[k][j];
                        
            printf("%d ", soma);
        }
        printf("\n");
    }
 
    return 0;
}

/*
[0][0]*[0][0]   +  [0][1]*[1][0]    +    [0][2]*[2][0]            [0][0]*[0][1]    +   [0][1]*[1][1]    +  [0][2]*[2][1]
[1][0]*[0][0]   +  [1][1]*[1][0]    +   [1][2]*[2][0]             [1][0]*[0][1]    +   [1][1]*[1][1]    +   [1][2]*[2][1]
*/