#include<stdio.h>

int main(){


    int velCarro, velMax = 40;
    printf("Velocidade do carro: ");
    scanf("%d", &velCarro);

    if (velCarro > velMax)
    {

        printf("Sua multa foi de %d reais", (velCarro - velMax)*50);


    } else {

        printf("Sem multa :)");

    }

    return 0;
}
