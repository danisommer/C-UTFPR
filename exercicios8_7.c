#include <stdio.h>

int main (){

    int n, contagem=1, numero, anterior=0, consecutivos=1, maior=0;
    printf("Escreva quantos numeros serao informados: ");
    scanf("%d", &n);

    while(contagem<=n){

        printf("Informe o %do numero: ",contagem);
        scanf("%d", &anterior);

        if(numero==anterior){
            consecutivos++;

        }else{

        consecutivos = 1;
        }

        if (consecutivos>maior){

            maior=consecutivos;

        }

        numero=anterior;
        contagem++;
    }

    printf("%d pontos", maior);


    return 0;
}



/*
perguntar n

while contagem<n
    perguntar um numero
    comparar com o anterior

    se for igual, somar 1 a uma var
    contagem++


mostrar a var


Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores
inteiros. O número de pontos do participante é o tamanho da maior sequência de valores consecutivos
iguais. Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores:
30 30 30 30 40 40 40 40 40 30 30
Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note que o
participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.
Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de
pontos de um participante. A entrada é um número inteiro N, que representa o número de valores
sorteados. Depois, o programa deve ler N valores inteiros, na ordem do sorteio. Note que os valores
são simplesmente informados, não são sorteados pelo programa! O programa então deve mostrar o
número de pontos do participante.
*/