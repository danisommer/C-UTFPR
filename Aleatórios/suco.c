#include<stdio.h>

int main() {

    int sucoJoao = 1, sucoMaria = 2, jarra = 0;

    jarra = sucoJoao;

    sucoJoao = sucoMaria;

    sucoMaria = jarra;

    printf("Depois da troca, o copo de Joao tera %d e o copo de Maria tera %d", sucoJoao, sucoMaria);

    return 0;


};
