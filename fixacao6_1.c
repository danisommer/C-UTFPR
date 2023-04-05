#include <stdio.h>
#define N 15

int main (){

    int i = 1, j;

    while (i <= N){
        printf("%d ", i);
        i++;
    }
    printf("\n");
    for (i = 1; i <=N ;i++){
        printf("%d ", i);
    }
    return 0;
}




/*1. Escreva um programa que mostra todos os números no intervalo [0, N), onde N é uma constante
definida com o uso da diretiva de pré-processamento #define. Faça a sequência ser mostrada duas
vezes, uma usando a estrutura de repetição while, a outra o for.*/
