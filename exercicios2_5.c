#include<stdio.h>

int main () {

    float numero1, numero2, numero3, numero4, numero5;
    printf("Escreva 5 numeros:\n");
    scanf("%f %f %f %f %f",&numero1, &numero2, &numero3, &numero4, &numero5);
    printf("a media dos dois primeiros eh: %.2f\n",(numero1+numero2)/2);
    printf("a media dos tres primeiros eh: %.2f\n",(numero1+numero2+numero3)/3);
    printf("a media dos quatro primeiros eh: %.2f\n",(numero1+numero2+numero3+numero4)/4);
    printf("a media dos cinco primeiros eh: %.2f\n",(numero1+numero2+numero3+numero4+numero5)/5);

    return 0;

}
