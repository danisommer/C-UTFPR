#include <stdio.h>

int main (){
    float menorNota = 10, maiorNota = 0, soma = 0, nota, juizes = 6;
    int i;
    for (i = 0; i < juizes; i++)
    {
        scanf ("%f", &nota);
        soma += nota;

        if (nota < menorNota){
            menorNota = nota;
        }

        if (nota > maiorNota){
            maiorNota = nota;
        }
    }

    soma -= menorNota;
    soma -= maiorNota;

    printf ("Media: %.2f", soma/(juizes-2));
    return 0;

}
