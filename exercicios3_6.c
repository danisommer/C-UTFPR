#include <stdio.h>

int main () {

    float x, y;
    printf("Escreva uma coordenada: ");
    scanf("%f %f", &x, &y);

    if (x > 0) {

        if(y > 0){
            printf("Q1");
        } else if (y < 0){
            printf("Q4");
        } else {
            printf("Eixo X");
        }

    } else if (x < 0){

         if(y > 0){
            printf("Q2");
        } else if (y < 0){
            printf("Q3");
        } else {
            printf("Eixo X");
        }

    } else {

         if(y > 0){
            printf("Eixo Y");
        } else if (y < 0){
            printf("Eixo Y");
        } else {
            printf("Origem");
        }

    }

    return 0;
}
