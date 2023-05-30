#include <stdio.h>
#define N 11
void geraMatrizInca (int matriz [N][N])
{
    int d, i, count=1, n = N-1;

    for(d=0;d<N;d++)
    {
        for(i=d; i<=n-d; i++)
            matriz[d][i]=count++;

        for(i=d+1; i<=n-d; i++)
            matriz[i][n-d]=count++;

        for (i=n-d-1; i>=d; i--)
            matriz[n-d][i]=count++;
        
        for (i=n-d-1; i>=d+1; i--)
            matriz[i][d]=count++;   
    }
}
 int main()
 {
    int matriz[N][N], i, j;
    geraMatrizInca(matriz);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%5d ", matriz[i][j]);
        
        printf("\n");
    }
 }