/*

#include <stdio.h>
#include <math.h>

int main (){

    int i;
    float soma, sinal;

    for (i=0; i<=100000; i++){

        soma += pow(-1, i-1)/i;
    }

    printf("%f", soma);
    return 0;
}
*/



/*
() 7.
a) Escreva um programa que calcula duas vezes o somatório:

((-1)^(i-1))/i

i= 1 -> 1000000

Na primeira vez, o somatório é calculado com o valor de i indo de 1 a 1000000, na segunda, o valor de
i vai de 1000000 a 1. Use apenas variáveis do tipo float, e não use qualquer função para o cálculo
da potência (preste atenção ao que a potência está fazendo neste somatório!). Na hora de imprimir os
resultados, use 20 casas decimais.
b) O que poderia fazer o resultado do somatório mudar quando mudamos a ordem dos cálculos?
c) O que acontece se, em vez de float, o tipo das variáveis for double?
*/

#include <stdio.h>
int main ()
{
int i;
float sinal = 1;
float somatorio1 = 0;
float somatorio2 = 0;
for (i=1; i <= 1000000; i++)
{
somatorio1 += sinal * 1/i;
sinal = -sinal;
}
sinal = -1;
for (i=1000000; i >= 1; i--)
{
somatorio2 += sinal * 1/i;
sinal = -sinal;
}
printf ("%.20f\n", somatorio1);
printf ("%.20f\n", somatorio2);
return (0);
}