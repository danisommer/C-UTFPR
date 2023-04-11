#include <stdio.h>


int main (){

    int maior, menor, numero, contagem = 0;
    printf("Insira o maior e o menor numero: ");
    scanf("%d %d", &maior, &menor);
    printf("Insira um numero: ");
    scanf("%d", &numero);
    


    if (menor > 0 && maior > menor){
        while (numero >= 0){

            if (numero >= menor && numero <= maior){

                contagem ++;
            }
            
            printf("Insira um numero: ");
            scanf("%d", &numero);
            
        }

    } else {

        printf("Valores invalidos");
        return 0;
    }

    if (contagem == 0){

        printf("Sem valores na faixa");

    } else {
    printf("Numeros dentro da faixa [%d, %d]: %d", menor, maior, contagem);
    }
    return 0;
}




/*
3. Escreva um programa que receba como entradas os limites inferior e superior de uma faixa de
valores, respectivamente min e max. Tanto min quanto max devem ser inteiros positivos. O programa
então deve passar a ler valores inteiros, até que seja fornecido um número negativo. No final, o
programa deve mostrar quantos dos valores informados estavam na faixa [min, max], assim como o
maior e o menor número lidos, considerando somente os valores dentro da faixa. Se não tiverem sido
dados valores dentro da faixa, o programa não deve mostrar o menor e o maior valor, e sim uma
mensagem de erro.
*/