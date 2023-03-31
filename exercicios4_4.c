#include <stdio.h>

int main () {

    int valor, notas1, notas2, notas5, notas10, notas20, notas50, notas100;
    printf("Escreva a quantia em reais: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    notas50 = (valor%100)/50;
    notas20 = (valor%100%50)/20;
    notas10 = (valor%100%50%20)/10;
    notas5 = (valor%100%50%20%10)/5;
    notas2 = (valor%100%50%20%10%5)/2;
    notas1 = (valor%100%50%20%10%5)%2;




    printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d notas de 1", notas100, notas50, notas20, notas10, notas5, notas2, notas1);




    return 0;
}
