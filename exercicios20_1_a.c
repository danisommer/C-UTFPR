#include <stdio.h>

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

Tamanho classifica (float n1, float n2, float n3)
{
    Tamanho numeros;
    
    numeros.maior = n1;
    numeros.meio = n2;
    numeros.menor = n3;

    if(numeros.meio > numeros.maior)
        troca(&numeros.meio, &numeros.maior);

    if(numeros.menor > numeros.meio)
    {
        troca(&numeros.meio, &numeros.menor);
        if(numeros.meio > numeros.maior)
            troca(&numeros.meio, &numeros.maior);
    }
    return numeros;
}

int main()
{
    float n1 = 10.2, n2 = 10.1, n3 = 10;
    Tamanho numeros;

    numeros = classifica(n1, n2, n3);

    printf("maior: %.2f\n meio: %.2f\n menor: %.2f", numeros.maior, numeros.meio, numeros.menor);

    return 0;
}



/*
a) Escreva uma função que recebe 3 float's e retorna uma struct que tem 3 campos do tipo
float: menor, maior e meio. A função deve analisar os valores preencher a struct.
MaMeMe classifica (float n1, float n2, float n3);
b) Reescreva a função anterior para que ela ordene os valores já colocados em uma variável passada
por referência. Os valores são dados em uma ordem arbitrária, e reordenados pela função.
void classifica (MaMeMe* valores);
*/