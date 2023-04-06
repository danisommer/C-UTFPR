#include <stdio.h>
int main ()
{
    char coisa;
    short negocio;
    int treco;
    printf ("%d %d %d\n", coisa, negocio + coisa, treco*coisa); //todos vao retornar valrres nulos por nao terem nenhum valor atribuído.
    coisa = 67;
    negocio = coisa; //67
    treco = 0x58; //88
    printf ("%d %d %d\n", coisa, negocio, treco); //67 67 88
    printf ("%d", coisa%2); //1
    coisa = coisa / 2;
    printf ("%d", coisa%2); //1
    coisa = coisa / 2;
    printf ("%d", coisa%2); //0
    coisa = coisa / 2;
    printf ("%d", coisa%2); //0
    coisa = coisa / 2;
    printf ("%d", coisa%2); //0
    coisa = coisa / 2;
    printf ("%d", coisa%2); //0
    coisa = coisa / 2;
    printf ("%d", coisa%2); //1
    coisa = coisa / 2;
    printf ("%d", coisa%2); //0
    coisa = coisa / 2;
    printf ("\n");
    treco = 1000;
    coisa = treco;
    printf ("%d %d %d\n", coisa, negocio, treco); // -24 67 1000
    return (0);

}


/*
a) O que o programa abaixo irá mostrar na tela? Responda sem executar o programa.

b) O primeiro printf do programa acima tem um erro. Qual? Sim, todos os valores serão nulos por nao possuirem atribuição (exceto negocio + coisa, que vai printar um valor aleatorio)
c) No segundo printf, o valor impresso para a variável treco não é 58. Por que? >>> porque eh um hexadecimal, ou seja, em decimal aquele numero seria 88
d) Quais variáveis/valores são armazenados pelo computador como números hexadecimais? Quais 
são armazenados como números na base 10? Quais são armazenados como números binários? >>> treco é hexadecimal. negocio é decimal e coisa é binario.
e) Explique o significado do que é impresso na sequência de impressões e divisões envolvendo a
variável coisa. >>> o programa imprime 1 para quando o resto da divisao por 2 é 1 e 0 quando não. 
f) Na última impressão, apesar de atribuirmos o valor de treco à variável coisa, os valores
mostrados são diferentes. Por que isso acontece? >>> o programa dá erro porque "coisa" é um char, e é atribuido um valor inteiro para a variavel.





*/