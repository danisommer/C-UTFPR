#include <stdio.h> 

int main (){

    int numero, soma = 0, contagem, validos = 0;

    contagem = 0;
    while ( contagem < 10){

        printf("Insira um numero: ");
        scanf("%d", &numero);  
        if (numero < 20){
            soma += numero;
            validos++;
        }
        contagem++;
    /* VERIFICAÇÃO
        printf("Soma atual: %.2f\n", soma);
        printf("Numeros validos: %d\n", validos);
    */
    }
    printf("Media: %.2f", (float) soma/validos);

    return 0;
}
/*
(*) 1. Escreva um programa que leia 10 números inteiros e imprima a média dos números dados, mas
somente daqueles cujo valor for menor que 20. Faça duas versões do programa, uma usando while
e a outra for.
*/