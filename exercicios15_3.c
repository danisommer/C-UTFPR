#include <stdio.h>
#define MAX 20



numeroElementos(int entrada[], int saida[])
{

    for (int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            if(saida[i]!=entrada[j])
            {
                saida[i]=entrada[j];
                break;
            }
        }
    }

    for(int j = 0; j < MAX; j++)
    {
        printf("%d", entrada[j]);
    }
    printf("\n");
    for(int j = 0; j < MAX; j++)
    {
        printf("%d", saida[j]);
    }

}

int main ()
{
    int entrada[MAX]={0, 1, 2, 3, 4, 3, 2, 4, 5, 3, 2, 6, 1, 0}, saida[MAX];
    numeroElementos(entrada, saida);


    return 0;
}


/*
Escreva uma função que recebe um vetor de inteiros e um vetor de saída com a mesma
capacidade. A função deve colocar nas posições iniciais do vetor de saída os elementos do vetor de
entrada, mas sem repetições, e retornar o número de elementos inseridos no vetor de saída. As
posições que sobrarem no vetor de saída terão conteúdo indeterminado. Os dados do vetor original
devem ser mantidos intactos. Por exemplo, se os elementos do vetor original são {0, 1, 2, 3, 4, 3, 2, 4,
5, 3, 2, 6, 1, 0}, o novo vetor deve conter nas posições iniciais os valores {0, 1, 2, 3, 4, 5, 6}, com as
demais posições tendo conteúdo indeterminado, e a função deve retornar 7.
*/
