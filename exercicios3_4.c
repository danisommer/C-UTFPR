#include <stdio.h>

int main(){

    int comeco, fim, duracao;
    printf("Escreva o horario de comeco e o de fim: ");
    scanf("%d  %d",  &comeco, &fim);


    if (comeco > fim){

        duracao = 24 - comeco + fim;
        printf("O jogo durou %d horas", duracao);

    } else if (comeco < fim){

    duracao = fim - comeco;
    printf("O jogo durou %d horas", duracao);

    } else {

        printf("O jogo durou 24h");

    }




    return 0;

}
