#include <stdio.h>

int main (){

    int numero, digito, achou = 2;

    printf("Digite o numero: ");
    scanf("%d", &numero);
    printf("Digite o digito: ");
    scanf("%d", &digito);

    while (achou == 2){
     
        if (numero % 10 == digito){

            achou = 1;

        } else {

            numero /= 10;

        }

        if (numero <= 10 && numero % 10 != digito){

            achou = 0;

        }

    }

    if(achou == 1){

        printf("Tem o digito\n");

    }

    if(achou == 0){

        printf("Nao tem o digito\n");

    }

    return 0;



}

/*

(**) 4. Escreva um programa que lê um inteiro positivo e um dígito. O programa deve verificar se o
número dado contém o dígito em qualquer posição. Não é preciso dizer qual a posição, apenas indicar
se o dígito está ou não presente.

*/


