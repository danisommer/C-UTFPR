#include <stdio.h>
#define STRING_LENGHT 19

int ehPalindromo (char s[])
{
    for (int i = 0; i < STRING_LENGHT/2; i ++)
    {
        if (s[i]!=s[STRING_LENGHT-i-1])
           return 0;
    }
    return 1;
}

int main ()
{
    char string[STRING_LENGHT] = "danielzakikazleinad";
    printf("%d", ehPalindromo(string));
    return 0;
}

/*
2. Escreva uma função que recebe uma string e retorna 1 se ela contém um palíndromo, ou 0 do
contrário. Um palíndromo é uma sequência que pode ser lida igualmente da esquerda para a direita ou
da direita para esquerda. Exemplos de palíndromos: “ovo”, “esse”, “eva asse essa ave”. O protótipo da
função deve ser:
*/