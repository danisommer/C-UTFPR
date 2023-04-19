#include <stdio.h>

int main (){

    char letra;
    int num1, num2, n1, n2;
    scanf("%d", &num1);
    num2=num1;
    
    for(n1=1; n1<=num1; n1++){

        letra=0x40+n1;

        for(n2=1; n2<=num2; n2++){
            
            printf("%c ", letra);
            letra ++;

        }

        num2--;

        printf("\n");

    }

    return 0;
}