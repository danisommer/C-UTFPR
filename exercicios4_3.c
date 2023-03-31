#include <stdio.h>

int main (){




    int dist;
    printf("Insira a distancia: ");
    scanf("%d", &dist);


    if ((dist <= 0) || (dist > 2000)){

        printf("Fora da quadra");

        return 0;

    }


    if (dist > 0 && dist <= 800){

        printf("1 Ponto");

    } else if (dist > 800 && dist <= 1400){

        printf("2 Pontos");

    } else {printf ("3 Pontos");}



    return 0;

}
