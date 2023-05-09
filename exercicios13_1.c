#include <stdio.h>
#include <stdlib.h>
#define N 100

int main ()
{
    int contador = 0;
    float ale, positivos[N], soma = 0, media, igual = 0, menor = 0, maior = 0;
    for(int i = 0; i < N; i++)
    {
        ale = (rand()/(float)RAND_MAX)*(80)-40;
        printf("%f\n", ale);

        if (ale > 0)
        {
            positivos[contador] = ale;
            soma += ale;
            contador++;
        }
    }

    media = soma/contador;
    printf("\nmedia dos positivos: %f\n\n", media);

    for (int j = 0; j < contador; j++)
    {

        printf("%f ", positivos[j]);
        if (positivos[j] == media)
            printf("igual\n");
        else if (positivos[j] > media)
            printf("maior\n");
        else
            printf("menor\n");

    }

    printf ("\n%d numeros positivos", contador);

    return 0;
}
