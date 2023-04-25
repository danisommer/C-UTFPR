#include<stdio.h>

int  main(){

    float peso, altura, imc;

    printf("Digite o peso e a altura: ");
    scanf ("%f %f", &peso, &altura);

    imc = peso/(altura*altura);

    printf("O IMC eh %.2f", imc);

    return 0;

}
