#include<stdio.h>

int main (){

    int n1, n2, n3;
    printf("Escreva 3 numeros aleatorios no formato N N N: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < n2 && n1 < n3){

        if (n2 > n3){printf("%d %d %d", n1, n3, n2);}
        else {printf("%d %d %d", n1, n2, n3);}

    }
    if (n2 < n1 && n2 < n3){

        if (n1 > n3){printf("%d %d %d", n2, n3, n1);}
        else {printf("%d %d %d", n2, n1, n3);}

    }
    if (n3 < n1 && n3 < n2){

        if (n1 > n2){printf("%d %d %d", n3, n2, n1);}
        else {printf("%d %d %d", n3, n1, n2);}

    }

    return 0;

}

/*
n1 n2 n3 ****
n1 n3 n2 ****
n2 n1 n3 ****
n2 n3 n1 ****
n3 n2 n1 ****
n3 n1 n2 ****
*/
