#include<stdio.h>

int main  (){

    int nascimento, idade, ano = 2023;
    printf("Em que ano voce nasceu?\n");
    scanf("%d", &nascimento);

    idade = ano - nascimento;

    if (idade < 16) {

        printf ("Nao eleitor");

    } else if (18 <= idade && idade < 65){

            printf("Eleitor obrigatorio");

        } else {

        printf("Eleitor facultativo");

        }

    return 0;

}
