#include <stdio.h>
int main (){
    int n1, n2, n3, aux;
    scanf ("%d %d %d", &n1, &n2, &n3);
    if (n2 >= n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1 >= n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
        if (n2 >= n3){
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }
    printf ("%d %d %d\n", n1, n2, n3);
    return (0);
}
/*
a) Qual será a saída se a entrada for 1 2 3? -> 1 2 3
b) Qual será a saída se a entrada for 20 10 30? -> 10 20 30
c) O que o programa faz, exatamente? Explique o funcionamento do algoritmo. -> o programa utiliza de estuturas condicionais e variaveis, tanto principais como de apoio, para deixar os 3 numeros inseridos em ordem crescente.

*/