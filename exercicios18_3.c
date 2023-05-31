#include <stdio.h>
#define N 5

void imprimeEspelhado(char matriz[N][N])
{
    int i, j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%c", matriz[i][j]);

        for(j=N-1;j>=0;j--)
            printf("%c", matriz[i][j]);

        printf("\n");
    }
    for(i=N-1;i>=0;i--)
    {
        for(j=0;j<N;j++)
            printf("%c", matriz[i][j]);

        for(j=N-1;j>=0;j--)
            printf("%c", matriz[i][j]);

        printf("\n");
    }
}

int main ()
{
    char matriz[N][N]={"ABCDE",
                       " BCDE",
                       "  CDE",
                       "   DE",
                       "    E"};
            
    imprimeEspelhado(matriz);

    return 0;
}