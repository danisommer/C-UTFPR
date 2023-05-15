#include <stdio.h>
#define N 5

int buscaVetor (int vetor[], int n, int procurado)
{
    for(int i = 0; i < n; i++)
    {
        if (vetor[i]==procurado)
            return i;
    } 
    return -1;
}

int main ()
{
    int vetor[5] = {3, 3, 1, 4, 5}, n = N, procurado = 5;

    printf("%d", buscaVetor(vetor, n, procurado));
    return 0;
}
