#include<stdio.h>

int main (){

    int conta, invertido, soma1, soma2, digito;
    printf("Insira o numero da sua conta bancaria: ");
    scanf("%d", &conta);

    invertido = ((conta%10)*100)+conta-(conta/100)*100-(conta%10)+conta/100;
    soma1 =  invertido + conta;

    if (soma1 >= 1000) {soma1 /= 10;}

    soma2 = soma1/100 + ((soma1%100)/10)*2 + (soma1%100%10)*3;

    digito = soma2 % 10;

    printf("Seu digito de seguranca eh: %d", digito);
    printf("\n \nInvertido: %d\n", invertido);
    printf("Soma 1: %d\n", soma1);
    printf("Soma 2: %d\n", soma2);

    return 0;

    }



  /*
  pega um numero
  inverte
  soma os dois
  se a soma for maior ou igual a 1000, divide por 10
  divide em centena dezena e unidade
  multiplica o 1 por 1, 2 por 2 e o 3 por 3
  soma os 3
  pega o ultimo digito
  */

