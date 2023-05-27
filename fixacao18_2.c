#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define N_LINHAS 5
#define N_COLUNAS 5

int temRepeticao(int matriz[N_LINHAS][N_COLUNAS])
{
    int i, j, k, l, contador;

    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
        {
            contador = 0;
            for (k = 0; k < N_LINHAS; k++)
            {
                for (l = 0; l < N_COLUNAS; l++)
                {
                    if (matriz[i][j] == matriz[k][l])
                        contador++;
                }
            }
            if (contador > 1)
                return 1;
        }
    }

    return 0;
}

int main()
{
    int i, j;
    int matriz[N_LINHAS][N_COLUNAS];
    srand(time(NULL));

    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    if (temRepeticao(matriz))
        printf("Tem elementos repetidos.\n");
    else
        printf("Nao tem elementos repetidos.\n");

    return 0;
}
