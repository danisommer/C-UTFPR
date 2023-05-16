#include <stdio.h>
#include <string.h>

int risada_engracada(char* risada) {
    char vogais[6] = "aeiou";
    char risada_sem_consoantes[51];
    int i, j = 0;

    // Remove as consoantes da risada
    for (i = 0; i < strlen(risada); i++) {
        if (strchr(vogais, risada[i]) != NULL) {
            risada_sem_consoantes[j] = risada[i];
            j++;
        }
    }
    risada_sem_consoantes[j] = '\0';

    // Inverte a sequência de vogais
    char risada_reversa[51];
    int length = strlen(risada_sem_consoantes);
    for (i = 0; i < length; i++) {
        risada_reversa[i] = risada_sem_consoantes[length - i - 1];
    }
    risada_reversa[length] = '\0';

    // Verifica se a risada é igual à sua inversão
    if (strcmp(risada_sem_consoantes, risada_reversa) == 0 && strlen(risada_sem_consoantes) > 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char risada[51];

    printf("Digite a risada: ");
    scanf("%s", risada);

    int resultado = risada_engracada(risada);

    if (resultado == 1) {
        printf("A risada eh engracada.\n");
    } else {
        printf("A risada nao eh engracada.\n");
    }

    return 0;
}