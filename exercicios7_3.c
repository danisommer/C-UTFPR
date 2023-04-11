#include <stdio.h>

int main (){

    int n1, n2, soma = 0, resto, quociente = 0;
    scanf("%d %d", &n1, &n2);

    while ((soma + n2) <= n1){

        soma = soma + n2;
        quociente ++;

    }
    resto = n1 - soma;
    printf("resto = %d quociente = %d", resto, quociente);


    return 0;

}


/*(**) 3. Escreva um programa que calcule o quociente e o resto da divisão de dois números inteiros
positivos dados, usando apenas as operações de soma e/ou subtração.*/

