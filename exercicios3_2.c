#include<stdio.h>

int main (){

    int numero, invertido;
    printf("Escreva um numero entre 100 e 999: ");
    scanf("%d", &numero);

    invertido = ((numero%10)*100)+numero-(numero/100)*100-(numero%10)+numero/100;
    printf("%d", invertido);
    
    return 0;

}
