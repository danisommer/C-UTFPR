#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 10
#define COL 10
#define LARGURA_MAX 5
#define N_NAVIOS 4

void limparTela();
void inicializarTabuleiro(char **tabuleiro);
void exibirTabuleiro(char **tabuleiro);
void posicionarNavios(char **resultado);
int realizarJogada(char **jogo, char **resultado, int *naviosRestantes);
int verificaTabuleiro(char **resultado);

void limparTela()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void inicializarTabuleiro(char **tabuleiro)
{
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            tabuleiro[i][j] = '-';
        }
    }
}

void exibirTabuleiro(char **tabuleiro)
{


    printf("\n");

    for (int i = 0; i < LIN; i++)
    {
        printf(" %d ", i);
        for (int j = 0; j < COL; j++)
        {
            if (tabuleiro[i][j] == 'N' || tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O')
                printf("%c ", tabuleiro[i][j]);
            else
                printf("- ");
        }

        printf("\n");
    }
        printf("  ");
        for (int j = 0; j < COL; j++)
    {
        printf(" %d", j);
    }
        printf("\n");
}

void posicionarNavios(char **resultado)
{
    int naviosColocados = 0;
    int ale1, ale2;
    int largura;

    while (naviosColocados < N_NAVIOS)
    {
        largura = LARGURA_MAX - rand()%3; //no mínimo 3 e no maximo 5

        int orientacao = rand() % 2; // 0: horizontal, 1: vertical

        if (orientacao == 0)
        { // Posicionar na horizontal
            ale1 = rand() % LIN;
            ale2 = rand() % (COL - largura + 1);

            int posicaoValida = 1;
            for (int j = ale2; j < ale2 + largura; j++)
            {
                if (resultado[ale1][j] == 'N')
                {
                    posicaoValida = 0;
                    break;
                }
            }

            if (posicaoValida)
            {
                for (int j = ale2; j < ale2 + largura; j++)
                {
                    resultado[ale1][j] = 'N';
                }
                naviosColocados++;
            }
        }
        else
        { // Posicionar na vertical
            ale1 = rand() % (LIN - largura + 1);
            ale2 = rand() % COL;

            int posicaoValida = 1;
            for (int i = ale1; i < ale1 + largura; i++)
            {
                if (resultado[i][ale2] == 'N')
                {
                    posicaoValida = 0;
                    break;
                }
            }

            if (posicaoValida)
            {
                for (int i = ale1; i < ale1 + largura; i++)
                {
                    resultado[i][ale2] = 'N';
                }
                naviosColocados++;
            }
        }
    }
}

int verificaTabuleiro(char **resultado)
{
    int estadoJogo = 0;

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (resultado[i][j] == 'N')
            {
                estadoJogo = 1; // Jogo continua
                break;
            }
        }
    }

    return estadoJogo;
}

int realizarJogada(char **jogo, char **resultado, int *naviosRestantes)
{
    int x, y;
    int continuaJogando = 1;

    while (continuaJogando)
    {
        if (verificaTabuleiro(resultado)==0)
            break;
        printf("\nDigite as coordenadas x e y: ");
        scanf("%d %d", &x, &y);

        if (x >= 0 && x < COL && y >= 0 && y < LIN)
        {
            if (jogo[y][x] != '-')
            {
                printf("Posicao ja atacada!\n");
            }
            else
            {
                if (resultado[y][x] == 'N')
                {

                    // Verifica se o navio foi completamente destruído
                    int navioDestruido = 1;
                    for (int j = x; j < x + LARGURA_MAX; j++)
                    {
                        if (resultado[y][j] != 'X')
                        {
                            navioDestruido = 0;
                            break;
                        }
                    }

                    // Marca as posições como atingidas
                    if (navioDestruido)
                    {
                        for (int j = x; j < x + LARGURA_MAX; j++)
                        {
                            jogo[y][j] = 'X';
                            resultado[y][j] = 'X';
                        }
                        (*naviosRestantes)--;

                        if (*naviosRestantes == 0)
                        {
                            return 0; // Fim do jogo - jogador venceu
                        }
                    }
                    else
                    {
                        jogo[y][x] = 'X';
                        resultado[y][x] = 'X';
                    }
                }
                else
                {
                    jogo[y][x] = 'O';
                    resultado[y][x] = 'O';
                    continuaJogando = 0; // Encerra o loop, passa a vez para o próximo jogador
                }

                // Atualiza o tabuleiro exibido após cada tiro
                limparTela();
                printf("Seu ataque:\n");
                exibirTabuleiro(jogo);
                if (resultado[y][x]=='X')
                    printf("\nVoce acertou um navio!\n");
                else
                    printf("\nVoce nao acertou um navio.\n");
            }
        }
        else
        {
            printf("Coordenadas invalidas!\n");
        }
    }

    return 1; // Jogo continua
}

int main()
{
    char **jogador1, **jogador2, **resultado1, **resultado2;
    int naviosRestantes1 = N_NAVIOS;
    int naviosRestantes2 = N_NAVIOS;
    int vezDoJogador = 1;

    jogador1 = (char **)malloc(sizeof(char *) * LIN);
    resultado1 = (char **)malloc(sizeof(char *) * LIN);
    jogador2 = (char **)malloc(sizeof(char *) * LIN);
    resultado2 = (char **)malloc(sizeof(char *) * LIN);

    for (int i = 0; i < LIN; i++)
    {
        jogador1[i] = (char *)malloc(sizeof(char) * COL);
        resultado1[i] = (char *)malloc(sizeof(char) * COL);
        jogador2[i] = (char *)malloc(sizeof(char) * COL);
        resultado2[i] = (char *)malloc(sizeof(char) * COL);
    }

    srand(time(NULL));

    inicializarTabuleiro(jogador1);
    inicializarTabuleiro(resultado1);
    posicionarNavios(resultado1);

    inicializarTabuleiro(jogador2);
    inicializarTabuleiro(resultado2);
    posicionarNavios(resultado2);

    printf("== BATALHA NAVAL ==\n");
    printf("REGRAS DO JOGO:\n\n");

    printf("- O jogo eh jogado por dois jogadores.\n");
    printf("- Cada jogador tem seu proprio tabuleiro dividido em uma grade 10x10.\n");
    printf("- Cada jogador possui quatro navios, cada um com largura variavel, entre 3 e 5 celulas.\n");
    printf("- Os navios podem ser posicionados na vertical ou na horizontal.\n");
    printf("- O objetivo do jogo eh afundar todos os navios do oponente antes que ele afunde os seus.\n");
    printf("- Para atirar, insira as coordenadas (x e y, sem parenteses e separadas por espaco) do local que desejado.\n");
    printf("- Se um tiro acerta um navio do oponente, o jogo marca o local como 'X'.\n");
    printf("- Se um tiro nao acerta um navio do oponente, o jogo marca o local como 'O'.\n");
    printf("- Um navio eh considerado afundado quando todas as celulas ocupadas por ele sao atingidas.\n");
    printf("- O primeiro jogador a afundar todos os navios do oponente eh o vencedor.\n");

    printf("\nPressione enter para comecar o jogo...\n");

    getchar();
    limparTela();

    while (1)
    {
        if (vezDoJogador == 1)
        {
            limparTela();
            printf("== Turno do Jogador 1 ==\n");
            printf("Mapa de ataque:\n");
            exibirTabuleiro(jogador1);
            printf("\nMapa de defesa:\n");
            exibirTabuleiro(resultado1);

            int resultadoJogada = realizarJogada(jogador1, resultado2, &naviosRestantes2);
            int verifica = verificaTabuleiro(resultado2);

            if (verifica == 0)
            {
                limparTela();
                printf("== Fim de Jogo ==\n");
                printf("Parabens, Jogador 1 venceu!\n");
                break;
            }
            else if (verifica == 0)
            {
                limparTela();
                printf("== Fim de Jogo ==\n");
                printf("Jogador 2 venceu!\n");
                break;
            }

            printf("\nPressione enter para continuar...\n");
            getchar();
            getchar();

            vezDoJogador = 2;
        }
        else
        {
            limparTela();
            printf("== Turno do Jogador 2 ==\n");
            printf("Mapa de ataque:\n");
            exibirTabuleiro(jogador2);
            printf("\nMapa de defesa:\n");
            exibirTabuleiro(resultado2);

            int resultadoJogada = realizarJogada(jogador2, resultado1, &naviosRestantes1);
            int verifica = verificaTabuleiro(resultado1);

            if (verifica == 0)
            {
                limparTela();
                printf("== Fim de Jogo ==\n");
                printf("Parabens, Jogador 2 venceu!\n");
                break;
            }
            else if (verifica == 0)
            {
                limparTela();
                printf("== Fim de Jogo ==\n");
                printf("Jogador 1 venceu!\n");
                break;
            }

            printf("\nPressione enter para continuar...\n");
            getchar();
            getchar();
            vezDoJogador = 1;
        }
    }

    for (int i = 0; i < LIN; i++)
    {
        free(jogador1[i]);
        free(resultado1[i]);
        free(jogador2[i]);
        free(resultado2[i]);
    }
    free(jogador1);
    free(resultado1);
    free(jogador2);
    free(resultado2);

    return 0;
}

