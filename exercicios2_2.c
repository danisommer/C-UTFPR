#include<stdio.h>
#include<math.h>

int main (){

    float raio;
    printf ("Escreva o raio da esfera \n");
    scanf ("%f", &raio);
    printf("o volume da esfera eh %f", (4*M_PI*raio*raio*raio)/3);

    return 0;

};
