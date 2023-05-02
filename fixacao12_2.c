#include <stdio.h>

int main (){

    int *x, y;

    x = &y;

     printf("%p", *x);

    return 0;
}



/*
2. Escreva um programa que contenha 1 variável do tipo int e um ponteiro para esta variável. O
programa deve atribuir um valor à variável e imprimir, nesta ordem:
a) O valor da variável.
b) O endereço da variável.
c) O endereço apontado pelo ponteiro.
d) O valor apontado pelo ponteiro.
e) O endereço do ponteiro.
Dica: use a sequência de escape %p para imprimir endereços.
*/