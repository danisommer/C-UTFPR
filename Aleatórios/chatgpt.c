#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Digite tres numeros inteiros separados por espaco: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("%d eh o maior numero.", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d eh o maior n�mero.", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("%d � o maior n�mero.", num3);
    } else {
        printf("Dois ou mais n�meros s�o iguais.");
    }

    return 0;
}
