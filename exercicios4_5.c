#include <stdio.h>

int main (){


    int lado1, lado2, lado3;
    printf("Escreva os lados de um triangulo no formato L, L, L: ");
    scanf("%d, %d, %d", &lado1, &lado2, &lado3);

    if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)){

        if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){

            if (lado1 == lado2 && lado1 == lado3){

            printf("Triangulo Equilatero, lados %d, %d e %d", lado1, lado2, lado3);

            } else {printf("Triangulo Isoceles, lados %d, %d e %d", lado1, lado2, lado3);}


        } else {printf("Triangulo Escaleno, lados %d, %d e %d", lado1, lado2, lado3);}


    } else {printf("nao eh um triangulo");}



    return 0;

}
