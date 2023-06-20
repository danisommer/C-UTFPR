#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 10
#define COL 10
#define N_NAVIOS 2

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void inicializarTabuleiro(char **tabuleiro) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            tabuleiro[i][j] = '-';
        }
    }
}

void exibirTabuleiro(char **tabuleiro) {
    printf("\n  ");
    for (int j = 0; j < COL; j++) {
        printf(" %d", j);
    }
    printf("\n");

    for (int i = 0; i < LIN; i++) {
        printf(" %d ", i);
        for (int j = 0; j < COL; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavios(char **tabuleiro, char **resultado) {
    int naviosColocados = 0;

    while (naviosColocados < N_NAVIOS) {
        int ale1 = rand() % LIN;
        int ale2 = rand() % COL;
        printf("\n%d %d\n", ale1, ale2);
        system("pause");

        if (resultado[ale1][ale2] != 'N') {
            resultado[ale1][ale2] = 'N';
            naviosColocados++;
        }
    }
}

int realizarJogada(char **jogo, char **resultado, int *tentativas, int *naviosRestantes) {
    int x, y;

    printf("\nTentativas restantes: %d\n", *tentativas);
    printf("Digite as coordenadas: ");
    scanf("%d %d", &y, &x);

    if (x >= 0 && x < COL && y >= 0 && y < LIN) {
        if (jogo[y][x] != '-') {
            printf("Posicao ja atacada!\n");
        } else {
            if (resultado[y][x] == 'N') {
                printf("Voce acertou um navio!\n");
                jogo[y][x] = 'X';
                resultado[y][x] = 'X';
                (*naviosRestantes)--;

                if (*naviosRestantes == 0) {
                    return 0; // Fim do jogo - jogador venceu
                }
            } else {
                printf("Voce nao acertou um navio.\n");
                jogo[y][x] = 'O';
                resultado[y][x] = 'O';
            }

            (*tentativas)--;

            if (*tentativas == 0) {
                return 2; // Fim do jogo - jogador perdeu
            }

            return 1; // Jogo continua
        }
    } else {
        printf("Coordenadas invalidas!\n");
    }

    return -1; // Jogada inválida, pede outra jogada
}

int main() {
    char **jogo, **resultado;
    int tentativas = 10;
    int naviosRestantes = N_NAVIOS;

    jogo = (char**)malloc(sizeof(char*) * LIN);
    resultado = (char**)malloc(sizeof(char*) * LIN);
    for (int i = 0; i < LIN; i++) {
        jogo[i] = (char*)malloc(sizeof(char) * COL);
        resultado[i] = (char*)malloc(sizeof(char) * COL);
    }

    srand(time(NULL));

    inicializarTabuleiro(jogo);
    inicializarTabuleiro(resultado);
    posicionarNavios(jogo, resultado);

    while (1) {
        limparTela();
        printf("== Batalha Naval ==\n");
        exibirTabuleiro(jogo);

        int resultadoJogada = realizarJogada(jogo, resultado, &tentativas, &naviosRestantes);

        if (resultadoJogada == 0) {
            limparTela();
            printf("== Batalha Naval ==\n");
            exibirTabuleiro(jogo);
            printf("Parabens, voce venceu!\n");
            break;
        } else if (resultadoJogada == 2) {
            limparTela();
            printf("== Batalha Naval ==\n");
            exibirTabuleiro(resultado);
            printf("Voce perdeu!\n");
            break;
        }

        printf("\nPressione enter para continuar...\n");
        getchar();
        getchar();
    }

    for (int i = 0; i < LIN; i++) {
        free(jogo[i]);
        free(resultado[i]);
    }
    free(jogo);
    free(resultado);

    return 0;
}
