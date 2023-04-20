#include <stdio.h>

unsigned long long potencia (unsigned int base, unsigned int expoente){

    int resultado=1, i;

    for(i=0; i<expoente; i++){
        resultado *= base;
    }

    return resultado;

}
/*
int main (){

    printf("%d", potencia(5,2)); //retorna 25 (5 elevado a 2)


    return 0;
}
*/