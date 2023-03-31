#include<stdio.h>
#include<math.h>


int  main(){

    int numero;
    printf("Escreva um numero inteiro:\n");
    scanf("%d", &numero);

    if (numero > 0){

        printf("%.2f", sqrt(numero));

    }    else  {

        printf("Nao foi possivel tirar a raiz");

    }

    return 0;

}
