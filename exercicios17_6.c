#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N_LINHAS 12
#define N_COLUNAS 12

int main ()
{
    int i, j, k;
    char string [] = {"CANETAAZUL"};
    char matriz [N_LINHAS][N_COLUNAS] = {"RHHEEIOYHMBE",
                                        "RNRYSENTOKWS",
                                        "IAIMITCGWVSR",
                                        "NHRNAURHEABK",
                                        "RTARUHETTNAO",
                                        "AACAWRFBCZUL",
                                        "LMDCPNHMSATE",
                                        "TSEGNNSDLSHA",
                                        "CANETAAZULRF",
                                        "IDRENAOBELRC",
                                        "LTYETOTIFCEA",
                                        "OFKAARATWANP"};

    for (i = 0; i < N_LINHAS; i++) {
        for (j = 0; j < N_COLUNAS; j++) {
            if (matriz[i][j] == 'C') {
                for (k = 0; k < N_COLUNAS - j; k++) {
                    if (matriz[i][j + k] != string[k]) {
                        break;
                    } else if (k == strlen(string) - 1) {
                        printf("%d %d\n", i, j);
                        return 0;
                    }
                }
            }
        }
    }
}

/*procurar CANETAAZUL e dizer a posicao da primeira letra (C)*/
