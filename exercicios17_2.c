#include <stdio.h>
#include <stdlib.h>
#define NSTRINGS 5
#define MAX 128

int main ()
{
    char string[NSTRINGS][MAX];
    int i;

    for(i=0; i < NSTRINGS; i++)
        fgets(string[i], MAX, stdin);

    for(i = NSTRINGS-1; i >=0; i--)
        printf("%s", string[i]);

    return 0;
}


/*
2. Escreva um programa que lê N strings de até 128 caracteres e depois mostra na tela as strings
em ordem inversa à fornecida (i.e. o programa mostra a última string, depois a penúltima, e assim por
diante, e no final mostra a primeira string digitada).
*/