#include <stdio.h>
#define NUMERO_ALUNOS 39

int main (){

    int i;
    float n, soma=0, media;

    for(i=1;i<=NUMERO_ALUNOS;i++){

        printf("insira a %da nota: ", i);
        scanf("%f", &n);
        soma += n;

    }

    media = soma/i;
    printf ("%f", media);

    return 0;
}