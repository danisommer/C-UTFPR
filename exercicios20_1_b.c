#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float maior;
    float menor;
    float meio;
} Tamanho;

void troca (float *a, float *b)
{
    float aux = *a;
    *a = *b;
    *b = aux;
}

void classifica (Tamanho *numeros)
{

    if(numeros->meio > numeros->maior)
        troca(&numeros->meio, &numeros->maior);

    if(numeros->menor > numeros->meio)
    {
        troca(&numeros->meio, &numeros->menor);
        if(numeros->meio > numeros->maior)
            troca(&numeros->meio, &numeros->maior);
    }
}

int main()
{
    Tamanho *numeros = (Tamanho *)malloc(sizeof(Tamanho));

    numeros->maior = 1;
    numeros->meio = 2;
    numeros->menor = 3;

    classifica(numeros);

    printf("maior: %.2f\nmeio: %.2f\nmenor: %.2f", numeros->maior, numeros->meio, numeros->menor);

    free(numeros);
    return 0;
}

/*
a) Escreva uma função que recebe 3 float's e retorna uma struct que tem 3 campos do tipo
float: menor, maior e meio-> A função deve analisar os valores preencher a struct->
MaMeMe classifica (float n1, float n2, float n3);
b) Reescreva a função anterior para que ela ordene os valores já colocados em uma variável passada
por referência-> Os valores são dados em uma ordem arbitrária, e reordenados pela função->
void classifica (MaMeMe* valores);
*/
