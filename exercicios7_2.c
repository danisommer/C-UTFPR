/*#include <stdio.h>

int main (){

    int n, num;
    scanf("%d", &n);

    while (n>0){

        num += num;
        scanf("%d", &num);

        n--;

    }

    
    comparar n atual com anterior
    2 flags verdadeiras que podem ou nao zerar

    


    return 0;

} 
*/


#include <stdio.h>
int main (){

    int i, n, anterior, atual;
    int crescente = 1, decrescente = 1; 
    printf("Escreva a quantidade de numeros: ");
    scanf ("%d", &n);
    printf("Escreva um numero: ");
    scanf ("%d", &anterior);

    for (i=1; i < n; i++) {

        printf("Escreva um numero: ");
        scanf ("%d", &atual);
        if (atual < anterior){
            crescente = 0;
        }
        if (atual > anterior){
            decrescente = 0;
        }
        anterior = atual;

    }
    if (crescente){
        printf ("Crescente!\n");
    } else if (decrescente){
        printf ("Decrescente!\n");
    } else {
        printf ("Nem um nem outro!\n");
    }
    return 0;
}

/*
2. Escreva um programa que leia n números (com n informado pelo usuário) e diga se eles formam
uma sequência crescente, decrescente, ou nenhum dos casos.
*/