#include <stdio.h>
int main (){
    char coisa;
    short negocio;
    int treco;
    printf ("%d %d %d\n", coisa, (int)negocio+(int)coisa, treco*coisa);
    coisa = 67;
    negocio = coisa; //67
    treco = 0x58;  //88
    printf ("%d %d %d\n", coisa, negocio, treco);
    printf ("%d", coisa%2);
    coisa = coisa / 2;
    printf ("%d", coisa%2);
    coisa = coisa / 2;
    printf ("%d", coisa%2);
    coisa = coisa / 2;
    printf ("%d", coisa%2);
    coisa = coisa / 2;
    printf ("%d", coisa%2);
    coisa = coisa / 2;
    printf ("%d", coisa%2);
    coisa = coisa / 2;
    printf ("%d", coisa%2);
    coisa = coisa / 2;
    printf ("%d", coisa%2);
    coisa = coisa / 2;
    printf ("\n");
    treco = 1000;
    coisa = treco;
    printf ("%f %d %d\n", coisa, negocio, treco);
    return (0);
}

/*
a) O que o programa abaixo irá mostrar na tela? Responda sem executar o programa.
0 215 0
67 67 88
11000010
-24 67 1000
b) O primeiro printf do programa acima tem um erro. Qual? Nao
c) No segundo printf, o valor impresso para a variável treco não é 58. >>> Por que? porque eh um hexadecimal, ou seja, em decimal aquele numero seria 88
d) Quais variáveis/valores são armazenados pelo computador como números hexadecimais? Quais 
são armazenados como números na base 10? Quais são armazenados como números binários? >>> Treco, negocio e coisa
e) Explique o significado do que é impresso na sequência de impressões e divisões envolvendo a
variável coisa. >>> o programa imprime 1 para quando o resto da divisao por 2 eh e 0 quando nao 
f) Na última impressão, apesar de atribuirmos o valor de treco à variável coisa, os valores
mostrados são diferentes. Por que isso acontece? >>> porque o indetificador utilizado no printf deveria ser 





*/