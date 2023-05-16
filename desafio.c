#include <stdio.h>

#define N 11

int ehValido(int cpf[N]) {
    int i, j;
    int soma1 = 0;
    int soma2 = 0;

    // Cálculo do primeiro dígito de verificação
    for (i = 0; i < N - 2; i++) {
        soma1 += cpf[i] * (N - 1 - i);
    }

    int digito1 = (soma1 % 11) % 10;

    // Cálculo do segundo dígito de verificação
    for (j = 0; j < N - 1; j++) {
        soma2 += cpf[j] * (N - j);
    }

    int digito2 = (soma2 % 11) % 10;

    // Verifica se os dígitos de verificação estão corretos
    if (cpf[N - 2] == digito1 && cpf[N - 1] == digito2) {
        return 1; // CPF válido
    } else {
        return 0; // CPF inválido
    }
}

int main() {
    int cpf[N] = {1, 2, 6, 6, 3, 9, 3, 4, 9, 8, 4};

    if (ehValido(cpf)) {
        printf("CPF valido\n");
    } else {
        printf("CPF invalido\n");
    }

    return 0;
}