#include <stdio.h>

int main(){

    int numero, invertido=0, aux1, aux2;
    scanf("%d", &numero);
    aux2 = numero;

    //inverter
    while (numero != 0) {
        aux1 = numero % 10;
        invertido = invertido * 10 + aux1;
        numero /= 10;
    }

    if(invertido==aux2){

        printf("Eh palindromo.");

    } else {

        printf("Nao eh palindromo.");

    }

    return 0;
}





/*
perguntar um numero


inverter

ver se é  igual ao numero

*/