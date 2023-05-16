#include <stdio.h>
#define N 5

void removeElemento (int vetor[])
{
    int posicao;
    printf("insira a posicao do elemento que deseja remover: ");
    scanf("%d", &posicao);
    if (posicao < 0 || posicao > N)
    {
        printf("ERROR\n");
        return;
    }

    while (posicao < N)
    {
        vetor[posicao] = vetor[posicao+1];
        posicao++;
    }
    vetor[N-1] = '\0';

}
int main ()
{
    int vetor[N] = {1, 2, 3, 4, 5};

    while (vetor[0]!='\0')
    {
        removeElemento(vetor);
        
    for(int i = 0; i < N; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    }
    return 0;
}
