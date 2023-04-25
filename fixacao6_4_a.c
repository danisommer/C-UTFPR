#include <stdio.h>

int main (){

    int n, N;
    scanf("%d", &n);

    N = n + 10;
    while (n < N){
        n++;
        printf("%d ", n);
    }

    return 0;
}



/*
Escreva um programa que imprima os 10 primeiros números inteiros maiores que um n dado. Faça
duas versões do programa, uma usando while e a outra for
*/