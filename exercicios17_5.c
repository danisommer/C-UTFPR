#include <stdio.h>
#include <stdlib.h>
#define M 9

int main()
{
    int resposta_sudoku[M][M] = {
        {9, 5, 4, 8, 1, 6, 3, 7, 2},
        {7, 8, 6, 2, 5, 3, 1, 4, 9},
        {1, 2, 3, 7, 9, 4, 6, 5, 8},
        {3, 1, 8, 9, 7, 2, 4, 6, 5},
        {2, 7, 9, 4, 6, 5, 8, 1, 3},
        {4, 6, 5, 3, 8, 1, 9, 2, 7},
        {8, 4, 7, 1, 2, 9, 5, 3, 6},
        {5, 3, 2, 6, 4, 8, 7, 9, 1},
        {6, 9, 1, 5, 3, 7, 2, 8, 4}
    };

    int i, j, num, eh_possivel = 1;

    // Verifica linhas
    for (i = 0; i < M; i++) {
        int ocorrencias[M + 1] = {0}; // Inicializa vetor de ocorrencias

        for (j = 0; j < M; j++) {
            num = resposta_sudoku[i][j];

            if (ocorrencias[num] == 1) {
                eh_possivel = 0;
                break;
            }

            ocorrencias[num] = 1;
        }

        if (eh_possivel == 0) {
            break;
        }
    }

    // Verifica colunas
    if (eh_possivel) {
        for (j = 0; j < M; j++) {
            int ocorrencias[M + 1] = {0}; // Inicializa vetor de ocorrencias

            for (i = 0; i < M; i++) {
                num = resposta_sudoku[i][j];

                if (ocorrencias[num] == 1) {
                    eh_possivel = 0;
                    break;
                }

                ocorrencias[num] = 1;
            }

            if (eh_possivel == 0) {
                break;
            }
        }
    }

    if (eh_possivel == 0) {
        printf("Solucao impossivel\n");
    } else {
        printf("Solucao possivel\n");
    }

    return 0;
}
