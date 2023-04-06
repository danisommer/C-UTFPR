#include<stdio.h>

int main(){

    float numero, potencia;
    printf("Digite um numero qualquer\n");
    scanf("%f", &numero);

     potencia =  numero*numero*numero;

     printf("seu numero ao cubo eh: %.2f", potencia);

    return 0;

}
