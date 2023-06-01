#include <stdlib.h>
#include <stdio.h>

int** criaMatrizdeInt (int nl, int nc)
{
    int ** teste, i;
    teste = (int **) malloc (nl * sizeof(int *));
    for (i=0;i<nl;i++)
        teste[i] = (int *) malloc (nc * sizeof(int));

    return teste;
}

int main()
{

    int nl, nc, **matriz, i, j;

    scanf("%d %d", &nl, &nc);
    matriz = criaMatrizdeInt(nl, nc);

    for(i=0; i<nl; i++)
        for(j=0; j<nc; j++)
            scanf("%d ", &matriz[i][j]);


    for(i=0; i<nl; i++)
    {
        for(j=0; j<nc; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    for (i = 0; i < nl; i++ )
        free(matriz[i]);
    free(matriz);

    return 0;
}
