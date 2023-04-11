#include <stdio.h>

int main (){

    int numero, digito, pot = 1, resto=0, aux=0, i=1;
    scanf("%d %d", &numero, &digito);

    while (i<numero){

        pot = pot * 10;
        aux = resto;
        resto = (numero % pot) - aux;

        if (resto == digito){

            printf("Tem o digito");
            return 0;

        } else {

        i=i*10;
        printf("n Tem o digito");
        return 0;

        }

    }
    return 0;



}

/*

4527425 4

(**) 4. Escreva um programa que lê um inteiro positivo e um dígito. O programa deve verificar se o
número dado contém o dígito em qualquer posição. Não é preciso dizer qual a posição, apenas indicar
se o dígito está ou não presente.
*/


