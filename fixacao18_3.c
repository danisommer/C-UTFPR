#include <stdio.h>
#define N 5

int atendeRequisitos(char matriz[N][N])
{
    int i, j; 

    for(i=0; i<N; i++)
        for(j=0;j<N;j++)
            if(matriz[i][j]!=matriz[j][i])
                return 0;

    return 1;
}

int main()
{
    char matriz[N][N] = {"SATOR",
                         "AREPO",
                         "TENET",
                         "OPERA",
                         "ROTAS"};

    if (atendeRequisitos(matriz))
        printf("Atende aos requisitos.\n");
    else
        printf("Nao atende aos requisitos.\n");

    return 0;
}