#include <stdio.h>
#define N 10


int main (){

    int soma=0, numero, dias;

    for(dias=1; soma<1000000; dias++){

        printf("\nDigite o numero de acessos no dia %d: ", dias);
        scanf("%d", &numero);
        soma += numero;
        if (soma <= 1000000){
            printf("\nFaltam %d acessos para 1000000", 1000000-soma);
        }

    }

    printf("\nlevaram %d dias para alcancar a meta", dias);

    return 0;

}

/*
while soma < 1000000
scanf numero

soma = soma + numero
contagem++


Dada a lista de acessos diários que ocorreram à página de Alice e Bia, escreva um programa para
determinar quantos dias foram necessários para a soma dos acessos chegar a 1 milhão e as amigas
ganharem o prêmio. O programa recebe como entrada um número inteiro N, que indica o número de
dias que a lista contém. Ele deve então ler N valores, correspondentes ao número de acessos de cada
dia: o primeiro número dado indica o número de acessos no primeiro dia, o segundo número dado
indica o número de acessos no segundo dia, e assim por diante. O programa deve então mostrar na
saída o número de dias que foram necessários para a soma dos acessos à página de Alice e Bia
chegar a 1.000.000. Se a meta não for atingida, o programa deve mostrar o valor de erro -1.
*/