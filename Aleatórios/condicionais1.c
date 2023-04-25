#include<stdio.h>

int main (){

    float numero;
    printf("Escreva um numero\n");
    scanf("%f", &numero);

    if (numero  >=  0){
        printf("Seu modulo eh %f", numero);
    }
    else {
        printf("Seu modulo eh %f", numero*-1);
    }

    return 0;
}
