#include<stdio.h>

int main(){


    int num1, num2, num3;
    printf("Escreva tres numeros separados por espaco: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){

        printf("%d eh o maior numero", num1);

    } else if (num2 > num1 && num2 > num3){

        printf("%d eh o maior numero", num2);

    } else if (num3 > num1 && num3 > num2){

        printf("%d eh o maior numero", num3);
    } else {

        printf("Dois ou mais numeros sao iguais");

    }

    return 0;

}
