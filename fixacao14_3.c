#include <stdio.h>
#define N 5

int crescente(int vetor[])
{
    for (int i = 0; i < N-1; i++)
    {
        if (vetor[i]>=vetor[i+1])
            return 0;

    }   
    return 1;
}
int main ()
{
    int vetor[N] = {10, 20, 30, 40, 50};
    printf("%d", crescente(vetor));
    return 0;
}
