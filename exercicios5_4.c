#include <stdio.h>

int main (){

    int n1;
    printf("Escreva um numero: ");
    scanf("%d", &n1);

    if ((n1 & 1) == 0){

        printf("Par");

    } else {printf ("Impar");}

    return 0;

}

/*

  xxxx xxx(0 ou 1) 
& 0000 0001
----------
0000 0001 impar
0000 0000 par

*/