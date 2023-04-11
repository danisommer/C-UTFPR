#include <stdio.h>

int main (){

    int n1= 1, soma = 0, num;
    scanf("%d", &num);

    while (n1>num){
        n1++;
        if(num%n1==0){
        soma = soma + (num/n1);
        printf("%f", soma);
        }
    }

    return 0;
}


/*

(**) 4. Construa um programa que informa se um número inteiro n dado é perfeito ou não. Um número
n é perfeito se a soma de todos os divisores positivos próprios - excluindo ele mesmo - é igual a n.
Exemplo:
28 é perfeito, pois 1 + 2 + 4 + 7 + 14 = 28.

*/
