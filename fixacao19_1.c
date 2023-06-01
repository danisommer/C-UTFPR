#include <stdlib.h>
#include <stdio.h>

int** geraTrianguloDePascal (int grau)
{
    int ** teste, i, j;
    teste = (int **) malloc (grau * sizeof(int *));
    for (i=0;i<grau;i++)
        teste[i] = (int *) malloc (grau * sizeof(int));

    for (i = 0; i < grau; i++) {
        for (j = 0; j < grau; j++) {
            teste[i][j] = 0;
        }
    }

    for (i = 0; i < grau; i++) {
        for (j = 0; j < grau; j++) {
            if (j == 0 || j == i)
                teste[i][j] = 1;
            else if (j > 0 && j < i)
                teste[i][j] = teste[i-1][j] + teste[i-1][j-1];
        }
    }
    return teste;
}

int main()
{

    int grau, **matriz, i, j;

    scanf("%d", &grau);
    matriz = geraTrianguloDePascal (grau);

    for(i=0; i<grau; i++)
    {
        for(j=0; j<grau; j++)
            printf("%5d ", matriz[i][j]);
        printf("\n");
    }

    for (i = 0; i < grau; i++ )
        free(matriz[i]);
    free(matriz);

    return 0;
}
