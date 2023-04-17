#include <stdio.h>

int main (){

    int numero, elementos = 0; //2 variaveis // numero  de numeros gerados
    scanf("%d", &numero);

    while(numero != 1){

        if (numero < 0){
        break;
        }

        if (numero % 2 == 0){

            numero = numero/2;

        } else {
            numero = numero*3 + 1;
        }

    printf("%d ", numero);
    elementos++;

    }

    printf("\n%d elementos", elementos);

    return 0;
}