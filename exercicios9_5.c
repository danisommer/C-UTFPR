#include <stdio.h>

int main() {
    char ch;
    int n;

    printf("Digite o caractere que sera usado: ");
    scanf("%c", &ch);

    printf("Digite o tamanho do losango: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2*i+1; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < n-i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2*i+1; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

/*
    printf(" ") n vezes e printf("#") (2*x + 1) vezes (x = 0)
    printf(" ") n-1 vezes e printf("#") (2*1 + 1) vezes (x = 1)
    printf(" ") n-2 vezes e printf("#") (2*2 + 1) vezes (x = 2)
    printf(" ") n-3 vezes e printf("#") (2*3 + 1) vezes (x = 3)
    printf(" ") n-4 vezes e printf("#") (2*4 + 1) vezes (x = 4)

    printf(" ") 0 vezes e printf("#") (2*x + 1) vezes x=n
    printf(" ") n-4 vezes e printf("#") (2*4 + 1) vezes (x = 4)
    printf(" ") n-3 vezes e printf("#") (2*3 + 1) vezes (x = 3)
    printf(" ") n-2 vezes e printf("#") (2*2 + 1) vezes (x = 2)
    printf(" ") n-1 vezes e printf("#") (2*1 + 1) vezes (x = 1)
    printf(" ") n vezes e printf("#") (2*x + 1) vezes (x = 0)
*/





