#include<stdio.h>

int main (){

    int segundos, minutos, horas, dias;
    printf("Escreva um tempo em segundos\n");
    scanf("%d", &segundos);

    printf("%d dias, ", segundos/86400);

    printf("%d horas, ", (segundos%86400)/3600);

    printf("%d minutos e ", (segundos%86400%3600)/60);

    printf("%d segundos", segundos%86400%3600%60);



    return 0;
};
