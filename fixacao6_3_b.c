#include <stdio.h>
#define N 10

int main (){

    int n, tab;
    printf("Insira um numero: ");
    scanf("%d", &n);
    
    tab = 1;
    while (tab <= N){

        printf("%d ", n*tab);
        tab++;
    }


    return 0;
}




/*Escreva um programa que imprima a tabuada de um número n dado (1 x n até 10 x n). Faça duas
versões do programa, uma usando while e a outra for.*/