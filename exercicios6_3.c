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


/*
(**) 3. Em uma competição de saltos ornamentais, 6 juízes dão suas notas, que podem variar entre 0 e
10 (incluindo valores “quebrados”). A nota final do atleta deve excluir a maior e a menor nota dos
juízes e é composta pela média das quatro notas restantes - esta é uma variação simples de um
conceito conhecido como “média truncada”. Faça um programa que lê do usuário as seis notas dos
juízes e informa a nota final do atleta.
*/