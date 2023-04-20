#include <stdio.h>

unsigned long long potencia (unsigned int base, unsigned int expoente){

   unsigned int resultado=1, i;

    for(i=0; i<expoente; i++){
        resultado *= base;
    }

    return resultado;

}

int main (){

    printf("%llu", potencia(2,10)); 


    return 0;
}
