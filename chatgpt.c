#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Digite tres numeros inteiros separados por espaco: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("%d eh o maior numero.", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d eh o maior número.", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("%d é o maior número.", num3);
    } else {
        printf("Dois ou mais números são iguais.");
    }

    return 0;
}
