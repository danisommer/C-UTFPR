#include <stdio.h>

unsigned int inverteNum (unsigned int n){

    int invertido=0, aux;
    while (n != 0) {
        aux = n % 10;
        invertido = invertido * 10 + aux;
        n /= 10;
    }
    return invertido;
    }

int main (){

    printf("%d", inverteNum(953));

    return 0;
}
