#include <stdio.h>

int main (){
    int i, n, soma;
    scanf ("%d", &n);
    soma = 0;

    for (i = 1; i <= n/2; i++){
        if (n % i == 0){
            soma += i; 
        }
    }
    if (soma == n){
        printf ("Eh perfeito");  
    } else {
        printf ("Nao eh perfeito");
    }

    return 0;
}



/*

(**) 4. Construa um programa que informa se um número inteiro n dado é perfeito ou não. Um número
n é perfeito se a soma de todos os divisores positivos próprios - excluindo ele mesmo - é igual a n.
Exemplo:
28 é perfeito, pois 1 + 2 + 4 + 7 + 14 = 28.

*/
