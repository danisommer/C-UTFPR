




/*
(***) 5. Escreva um programa no qual o usuário digita uma quantia arbitrária de números inteiros
positivos. Quando o usuário digitar um número menor ou igual a 0, o programa deve indicar o tamanho
da maior sequência crescente observada. Por exemplo, se os números digitados forem 5, 10, 3, 2, 4,
7, 9, 8, 5, a maior sequência crescente é 2, 4, 7, 9, então o programa deve mostrar na tela que a maior
sequência crescente tem 4 números. Já a sequência 10, 8, 7, 5, 2 está em ordem decrescente,
portanto a maior sequência crescente observada tem tamanho 1.

#include <stdio.h>
int main ()
{
int n;
int n_anterior = 0;
int tam_sequencia = 0; // O tamanho da sequência crescente atual.
int maior_sequencia = 0; // O tamanho da maior sequencia até agora.
//Começamos com tudo em 0, de forma que o primeiro número é maior que o
//n_anterior e a primeira sequência tem tamanho pelo menos igual a 1. 
scanf ("%d", &n);
while (n > 0)
{
if (n > n_anterior)
{
tam_sequencia++;
if (tam_sequencia > maior_sequencia)
maior_sequencia = tam_sequencia;
}
else
tam_sequencia = 1; // Ops, quebrou a sequência, vamos recomeçar.
n_anterior = n; // Lembra do n anterior.
scanf ("%d", &n); // Lê o próximo número.
}
printf ("%d\n", maior_sequencia);
return (0);
}
*/
