#include <stdio.h>
int main ()
{
float x1 = 5.0, x2 = 2.0;
int x3;


printf ("%f\n", (x1 % x2)); // % nao deve ser usado para variaveis float
printf ("%f\n", &x1); //& é utilizado para scanf, nao para printf
x1 = x2 //faltou o ;
printf ("%d\n", x3); //x3 nao possui valor atribuido
X2 = 10; //X2 nao foi declarado
x1 + 10.0; //o correto seria x1 = x1 + 10 ou x1 += 10
x3 = 039; //o correto seria x3 = 39;


return 0;
}