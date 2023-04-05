#include <stdio.h>

int main (){

    int n, N;
    scanf("%d", &n);
    
    for (N = n + 10; n < N; n++){
        
        printf("%d ", n + 1);
    }

    return 0;
}



/*
Escreva um programa que imprima os 10 primeiros números inteiros maiores que um n dado. Faça
duas versões do programa, uma usando while e a outra for
*/