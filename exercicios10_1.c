#include <stdio.h>

int arredonda (double x){

    int numero;

    if(x>0){
        if (x-0.5 < (int)x){
        numero = x;
        } else {
        numero = x+1;
        }
    } else {
    if (x+0.5 <= (int)x){
        numero = x-1;
        } else {
        numero = x;
        }

    }

    return numero;

}
/* teste
int main (){

    printf("%d", arredonda(-6.7));

    return 0;

}


Escreva uma função que arredonda um valor dado. O número
deve ser arredondado para o inteiro mais próximo. Se o número for equidistante de dois inteiros, deve
ser arredondado para o valor de maior magnitude. Ou seja, 1.5 é arredondado para 2, e -1.5 é
arredondado para -2. O protótipo da função deve ser:
int arredonda (double x
*/