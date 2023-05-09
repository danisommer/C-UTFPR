#include <stdio.h>
#include <stdlib.h>
#define N 10000

int main ()
{
    int numero[N], soma = 0, media, igual = 0, menor = 0, maior = 0;

    for(int i = 0; i < N; i++)
    {
        numero[i] = rand()%61 + 20;
        soma += numero[i];
    }

    media = soma/N;
    printf ("media: %d\n", media);

    for (int j = 0; j < N; j++)
    {
        printf("%d ", numero[j]);
        if (numero[j]==media)
        {
            printf("igual\n");
            igual++;
        }
        else if (numero[j]> media)
        {
            printf("maior\n");
            maior++;
        }
        else
        {
            printf("menor\n");
            menor++;
        }
    }
    printf("%d maiores, %d menores e %d iguais", maior, menor, igual);
    return 0;
}
