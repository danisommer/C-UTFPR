#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_TESTES 100
#define LARGURA 10
#define ALTURA 10
#define MIN_OK 15
#define MAX_OK 18

int ***geraMatriz(int nl, int nc)
{
    int ***matriz, i, j, k;
    matriz = (int ***)malloc(nl * sizeof(int **));
    for (i = 0; i < nl; i++)
    {
        matriz[i] = (int **)malloc(nc * sizeof(int *));
        for (j = 0; j < nc; j++)
        {
            matriz[i][j] = (int *)malloc(N_TESTES * sizeof(int));
            for (k = 0; k < N_TESTES; k++)
                matriz[i][j][k] = (rand()%6)+1;
        }
    }
    return matriz;
}

int avaliaDado(int *rolagens, int n)
{
    int i, resultados[6] = {0};

    for (i = 0; i < n; i++)
        resultados[rolagens[i] - 1]++;

    for (i = 0; i < 6; i++)
        if (resultados[i] < MIN_OK || resultados[i] > MAX_OK)
            return 0;

    return 1;
}

void analisa(int ***in, int largura, int altura, int **out)
{
    int i, j;
    for (i = 0; i < altura; i++)
    {
        out[i] = (int *)malloc(largura * sizeof(int));
        for (j = 0; j < largura; j++)
            out[i][j] = avaliaDado(in[i][j], N_TESTES);
    }
}

int main()
{
    int ***matriz;
    int **res;
    int i, j;

    srand(time(NULL));

    matriz = geraMatriz(ALTURA, LARGURA);

    res = (int **)malloc(ALTURA * sizeof(int *));
    for (i = 0; i < ALTURA; i++)
        res[i] = (int *)malloc(LARGURA * sizeof(int));

    analisa(matriz, LARGURA, ALTURA, res);

    printf("Resultados:\n");
    for (i = 0; i < ALTURA; i++)
        for (j = 0; j < LARGURA; j++)
        {
            printf("Vetor (%d, %d): ", i, j);
            if (res[i][j] == 1)
                printf("Aprovado\n");

            else
                printf("Reprovado\n");
        }


    for (i = 0; i < ALTURA; i++)
    {
        free(res[i]);
        for (j = 0; j < LARGURA; j++)
            free(matriz[i][j]);

        free(matriz[i]);
    }
    free(matriz);
    free(res);

    return 0;
}
