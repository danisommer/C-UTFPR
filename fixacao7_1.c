#include <stdio.h>

main (){

    int x;
    scanf ("%d", &x);

    while (x >= 10 && x <= 20){

        printf("\nECO %d \n\n", x);
        scanf("%d", &x);

    }



    printf("\n Tchau!s");
    return 0;
}

/*
1. Escreva um programa que lê números inteiros e mostra a mensagem ECO x, onde x é o último
número lido. O programa deve permanecer em execução somente enquanto os valores informados
estiverem no intervalo [10, 20], e não deve mostrar a mensagem quando o valor estiver fora do
intervalo, mesmo se for o primeiro valor. 
*/