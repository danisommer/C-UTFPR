#include <stdio.h>
#define N 5

int main(){

    int numero, divisor, divisores, soma=0, i=0;

    for(numero = 2; i < N; numero ++){

        divisores=0;
        for(divisor = 2; divisor<=numero/2; divisor++){

            if(numero%divisor==0){

                divisores++;
                break;

            }

        }

         if (divisores == 0){

                printf("%d ", numero);
                soma += numero;
                i++;

        }

    }

    printf("Soma: %d", soma);

    return 0;
}

/*

1
2 /1 /2 2 divisores
3 /1 /2 /3 2 divisores
4 /1 /2 /3 /4 3 divisores
5 /1 /2 /3 /4 /5 2 divisores
6 /1 /2 /3 /4 /5 /6 4 divisores
7 /1 /2 /3 /4 /5 /6 /7 2 divisores

(***) 2. Um número positivo é primo se for divisível somente por 1 e por ele mesmo. Escreva um
programa que calcula a soma dos N primeiros números primos, onde N é uma constante declarada em
uma macro. Por exemplo, como os 5 primeiros números primos são: 2, 3, 5, 7 e 11, para N = 5 a soma
será 28.
*/