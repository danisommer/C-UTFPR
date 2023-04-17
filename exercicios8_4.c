#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n); // Lê o tamanho da sequência

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o tamanho do pico numero %d: ", i+1);
        scanf("%d", &a[i]); // Lê cada elemento da sequência
    }

    int tem_pico = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
            tem_pico = 1;
            break;
        }
    }

    if (tem_pico) {
        printf("N\n"); // Tem mais de um pico
    } else {
        printf("S\n"); // Tem apenas um pico
    }

    return 0;
}