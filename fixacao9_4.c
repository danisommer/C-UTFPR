#include <stdio.h>

int main (){

    int i, n1;
    char letra = 0x41;
    scanf("%d", &n1);

    for (i=0; i<n1; i++){

        printf("%c ", letra);
        letra++;

    }




    return 0;
}