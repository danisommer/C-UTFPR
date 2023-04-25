#include<stdio.h>

int main (){

    int segundos, minutos, horas, dias;
    printf("Escreva uma quantidade de tempo em segundos\n");
    scanf("%d", &segundos);


    dias = segundos/86400;
    horas = (segundos%86400)*24;
    minutos = (segundos%86400*24)*60;



    printf("Isso equivale a %d dias, %d horas e %d minutos", dias, horas, minutos);


    return 0;

};
