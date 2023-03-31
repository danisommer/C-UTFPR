#include<stdio.h>

int main (){

    float precoGas,  precoAlcool, kmLitroGas,  kmLitroAlcool;
    float eficienciaAlcool, eficienciaGas;

    printf("Escreva o preco atual do alcool (Sugerido: 4.02): ");
    scanf("%f", &precoAlcool);

    printf("Escreva o preco atual da  gasolina (Sugerido: 5.42):  ");
    scanf("%f", &precoGas);

    printf("Quantos KM o carro faz por litro de alcool? (Sugerido: 7): ");
    scanf("%f", &kmLitroAlcool);

    printf("Quantos KM o carro faz por litro de Gasolina? (Sugerido: 10): ");
    scanf("%f", &kmLitroGas);

    eficienciaAlcool = (kmLitroAlcool/precoAlcool);
    eficienciaGas = (kmLitroGas/precoGas);

    if(eficienciaAlcool > eficienciaGas){

        printf("Abasteca com Alcool! Eficiencia de %.2f (contra %.2f da gasolina)", eficienciaAlcool, eficienciaGas);

    } else {

        printf("Abasteca com Gasolina! Eficiencia de %.2f (contra %.2f do alcool)", eficienciaGas, eficienciaAlcool);

    }

    return 0;

}
