#include <stdio.h>
int main()
{
    printf ("%f ", 5/9*(70-32)); //1) 0.000000, nao funciona pois a expressao lida apenas com inteiros, causando um equivoco matemático.
    printf ("%d ", 5/9*(70-32)); //2) 0, nao funciona pois, além de apresentar o mesmo erro da anterior, o operador está errado (%d).
    printf ("%f ", (70-32.0)*5/9); //3) 21.111111, funciona.
    printf ("%f ", 5.0/9*70-32); //4) 6.888889, nao funciona pois nao há () separando o 70 - 32, causando desordem no calculo.
    printf ("%d ", 5.0/9*(70-32)); //5) -954437177, nao funciona pois o operador deveria ser %f.
    printf ("%f ", 5.0/9*(70-32)); //6) 21.111111, funciona.

    /*
    3 e 6 funcionam 
    3 - printf ("%f ", (70-32.0)*5/9);
    6 - printf ("%f ", 5.0/9*(70-32));
    */

    return 0;
}

