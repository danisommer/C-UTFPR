#include <stdio.h>

int main(){


    int n, n1, multi;
    scanf("%d", &n);

    for(n1=0;n1<n;n1++){

        n1=n1*(n1+1);

    }

    printf("%d", n1);


    return 0;

}


/*
(***) 3. Escreva um programa que recebe como entrada um número positivo n e mostra qual é o menor
número que é divisível por todos os números de 1 a n. Por exemplo, para n = 10, o programa deve
mostrar o número 2520, que é divisível por todos os números entre 1 e 10.

*/