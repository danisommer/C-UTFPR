#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define LARGURA_MAX 5

void limparTela();
void inicializarTabuleiro(char **tabuleiro, int lin, int col);
void exibirTabuleiro(char **tabuleiro, int lin, int col);
void posicionarNavios(char **resultado, int lin, int col, int n_barcos);
void realizarJogada(char **jogo, char **resultado, int *naviosRestantes, int lin, int col, int vezDoJogador, int dificuldade);
int verificaTabuleiro(char **resultado, int lin, int col);

void limparTela(){
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void inicializarTabuleiro(char **tabuleiro, int lin, int col){
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            tabuleiro[i][j] = '-';
}

void exibirTabuleiro(char **tabuleiro, int lin, int col){

    printf("\n");

    for (int i = 0; i < lin; i++){
        printf(" %2d ", lin-i-1);
        for (int j = 0; j < col; j++)
            if (tabuleiro[i][j] == 'N' || tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O')
                printf("%c ", tabuleiro[i][j]);
            else
                printf("- ");
        printf("\n");
    }
    printf("   ");
    for (int j = 0; j < col; j++)
        printf(" %c",'A'+ j);
    printf("\n");
}

void posicionarNavios(char **resultado, int lin, int col, int n_barcos){

    int navioscolocados = 0, ale1, ale2, largura;

    while (navioscolocados < n_barcos){
        largura = LARGURA_MAX - rand()%4; //no minimo 2 e no maximo 5

        int orientacao = rand() % 2;
        if (orientacao == 0){
            ale1 = rand() % lin;
            ale2 = rand() % (col - largura + 1);

            int posicaoValida = 1;
            for (int j = ale2; j < ale2 + largura; j++)
                if (resultado[ale1][j] == 'N'){
                    posicaoValida = 0;
                    break;
                }

            if (posicaoValida){
                for (int j = ale2; j < ale2 + largura; j++)
                    resultado[ale1][j] = 'N';
                navioscolocados++;
            }
        }
        else{
            ale1 = rand() % (lin - largura + 1);
            ale2 = rand() % col;

            int posicaoValida = 1;
            for (int i = ale1; i < ale1 + largura; i++)
                if (resultado[i][ale2] == 'N'){
                    posicaoValida = 0;
                    break;
                }

            if (posicaoValida){
                for (int i = ale1; i < ale1 + largura; i++)
                    resultado[i][ale2] = 'N';
                navioscolocados++;
            }
        }
    }
}

int verificaTabuleiro(char **resultado, int lin, int col){
    int estadoJogo = 0;

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            if (resultado[i][j] == 'N'){
                estadoJogo = 1; // Jogo continua
                break;
            }
        }
    }

    return estadoJogo;
}

void realizarJogada(char **jogo, char **resultado, int *naviosRestantes, int lin, int col, int vezDoJogador, int dificuldade)
{
    char x;
    int y;
    int continuaJogando = 1;

    while (continuaJogando){
        if (verificaTabuleiro(resultado, lin, col) == 0)
            break;

        if (vezDoJogador == 1) {
            printf("\nDigite as coordenadas: ");
            scanf(" %c%d", &x, &y);
            y = lin - y - 1;

            if(x>='a'&&x<='z')
                x-='a';
            else if (x>='A'&&x<='Z')
                x -= 'A';

            else {
                printf("Coordenadas invalidas! Ex de coordenadas: A5, F4, G8\n");
                continue;
            }
        } else {

            if (dificuldade==1){
                x = rand() % col;
                y = rand() % lin;

                while (jogo[y][x] != '-') {
                    x = rand() % col;
                    y = rand() % lin;
                }

            } else if (dificuldade==2){
                if (resultado[y][x] == 'X') {
                    int posX, posY;
                    int encontrouPosicao = 0;

                    for (int i = 0; i < lin && !encontrouPosicao; i++) {
                        for (int j = 0; j < col && !encontrouPosicao; j++) {
                            if (jogo[i][j] == 'X') {
                                if (j + 1 < col && jogo[i][j + 1] == '-') {
                                    posX = j + 1;
                                    posY = i;
                                    encontrouPosicao = 1;
                                }
                                else if (j - 1 >= 0 && jogo[i][j - 1] == '-') {
                                    posX = j - 1;
                                    posY = i;
                                    encontrouPosicao = 1;
                                }
                                else if (i - 1 >= 0 && jogo[i - 1][j] == '-') {
                                    posX = j;
                                    posY = i - 1;
                                    encontrouPosicao = 1;
                                }
                                else if (i + 1 < lin && jogo[i + 1][j] == '-') {
                                    posX = j;
                                    posY = i + 1;
                                    encontrouPosicao = 1;
                                }
                            }
                        }
                    }

                    if (encontrouPosicao) {
                        x = posX;
                        y = posY;
                    } else {
                        x = rand() % col;
                        y = rand() % lin;

                        while (jogo[y][x] != '-') {
                            x = rand() % col;
                            y = rand() % lin;
                        }
                    }
                } else {
                    x = rand() % col;
                    y = rand() % lin;

                    while (jogo[y][x] != '-') {
                        x = rand() % col;
                        y = rand() % lin;
                    }
                }

            } else if (dificuldade==3){

                int sorte = rand()%3;
                if(sorte == 0){
                    for (int i = 0; i < lin; i++)
                        for (int j = 0; j < col; j++)
                            if (resultado[i][j] == 'N') {
                                x = j;
                                y = i;
                            }
                } else {

                    x = rand() % col;
                    y = rand() % lin;

                    while (jogo[y][x] != '-') {
                        x = rand() % col;
                        y = rand() % lin;
                    }
                }

            } else if (dificuldade==4){
                int sorte = rand()%2;
                if(sorte == 0){
                    for (int i = 0; i < lin; i++)
                        for (int j = 0; j < col; j++)
                            if (resultado[i][j] == 'N') {
                                x = j;
                                y = i;
                            }
                } else {

                    x = rand() % col;
                    y = rand() % lin;

                    while (jogo[y][x] != '-') {
                        x = rand() % col;
                        y = rand() % lin;
                    }
                }
            }   else if (dificuldade==5){
                    for (int i = 0; i < lin; i++)
                        for (int j = 0; j < col; j++)
                            if (resultado[i][j] == 'N') {
                                x = j;
                                y = i;
                            }
            }
        }

        if (x >= 0 && x < col && y >= 0 && y < lin){
            if (jogo[y][x] != '-')
                printf("Posicao ja atacada!\n");
            else{
                if (resultado[y][x] == 'N'){
                    int navioDestruido = 1;
                    for (int j = x; j < x + LARGURA_MAX; j++)
                        if (resultado[y][j] != 'X'){
                            navioDestruido = 0;
                            break;
                        }
                    if (navioDestruido){
                        for (int j = x; j < x + LARGURA_MAX; j++){
                            jogo[y][j] = 'X';
                            resultado[y][j] = 'X';
                        }
                        (*naviosRestantes)--;
                    }
                    else{
                        jogo[y][x] = 'X';
                        resultado[y][x] = 'X';
                    }
                }
                else{
                    jogo[y][x] = 'O';
                    resultado[y][x] = 'O';
                    continuaJogando = 0;
                }
                limparTela();
                if (vezDoJogador == 1){
                    printf("Seu ataque:\n");
                    exibirTabuleiro(jogo, lin, col);
                    if (resultado[y][x] == 'X')
                        printf("\nAcertou!!!\n");
                    else
                        printf("\nAgua!\n");
                }
                else {
                    printf("Ataque do Jogador 2 (Bot):\n");
                    exibirTabuleiro(jogo, lin, col);
                    printf("\nJogador 2 jogou em: %c%d\n", 'A' + x, lin -y -1);
                }
            }
        }
        else
            printf("Coordenadas invalidas! Ex de coordenadas: A5, F4, G8\n");
    }
    }

int main(){
    char **jogador1, **jogador2, **resultado1, **resultado2;
    int vezDoJogador = 1;
    int lin=0, col=0, n_barcos=0, area_min, min=0, dificuldade = 0;

    srand(time(NULL));

    while(n_barcos < 1||min>26){
        limparTela();
        printf("== BATALHA NAVAL ==\n");
        printf("Facil - 1 a 10 barcos\n");
        printf("Medio - 11 a 20 barcos\n");
        printf("Dificil - 21 a 40 barcos\n");
        printf("Impossivel - +40 barcos\n");
        printf("\nDigite o numero de barcos: ");
        scanf("%d", &n_barcos);
        area_min = n_barcos * LARGURA_MAX;
        min = sqrt(area_min)+3;
    }

    while (lin < min || lin > 26 || col < min || col > 26 || dificuldade > 5 || dificuldade <= 0) {
        limparTela();
        printf("== BATALHA NAVAL ==\n");
        printf("REGRAS DO JOGO:\n\n");
        printf("- O jogo eh jogado por dois jogadores.\n");
        printf("- Cada jogador tem seu proprio tabuleiro dividido em uma grade 10x10.\n");
        printf("- Cada jogador possui quatro navios, cada um com largura variavel, entre 3 e 5 celulas.\n");
        printf("- Os navios podem ser posicionados na vertical ou na horizontal.\n");
        printf("- O objetivo do jogo eh afundar todos os navios do oponente antes que ele afunde os seus.\n");
        printf("- Para atirar, insira as coordenadas (no sistema letra-numero. Por ex: A0, F3, D4) do local que desejado.\n");
        printf("- Se um tiro acerta um navio do oponente, o jogo marca o local como 'X'.\n");
        printf("- Se um tiro nao acerta um navio do oponente, o jogo marca o local como 'O'.\n");
        printf("- Um navio eh considerado afundado quando todas as celulas ocupadas por ele sao atingidas.\n");
        printf("- O primeiro jogador a afundar todos os navios do oponente eh o vencedor.\n");
        printf("\nDigite o numero de linhas e colunas desejados:\n");
        printf("linhas (minimo: %d, maximo: 26): ", min);
        scanf("%d", &lin);
        printf("colunas (minimo: %d, maximo: 26): ", min);
        scanf("%d", &col);
        printf("\nDigite a dificuldade desejada:\n1) Facil\n2) Medio\n3) Dificil\n4) Impossivel\n5) HACKER\nDificuldade: ");
        scanf("%d", &dificuldade);
    }

    int naviosRestantes1 = n_barcos;
    int naviosRestantes2 = n_barcos;

    jogador1 = (char **)malloc(sizeof(char *) * lin);
    resultado1 = (char **)malloc(sizeof(char *) * lin);
    jogador2 = (char **)malloc(sizeof(char *) * lin);
    resultado2 = (char **)malloc(sizeof(char *) * lin);

    for (int i = 0; i < lin; i++){
        jogador1[i] = (char *)malloc(sizeof(char) * col);
        resultado1[i] = (char *)malloc(sizeof(char) * col);
        jogador2[i] = (char *)malloc(sizeof(char) * col);
        resultado2[i] = (char *)malloc(sizeof(char) * col);
    }

    inicializarTabuleiro(jogador1, lin, col);
    inicializarTabuleiro(resultado1, lin, col);
    posicionarNavios(resultado1, lin, col, n_barcos);

    inicializarTabuleiro(jogador2, lin, col);
    inicializarTabuleiro(resultado2, lin, col);
    posicionarNavios(resultado2, lin, col, n_barcos);

    printf("\nPressione enter para comecar o jogo...\n");
    getchar();
    limparTela();

    while (1){
        if (vezDoJogador == 1){
            limparTela();
            printf("== Turno do Jogador 1 ==\n");
            printf("Mapa de ataque:\n");
            exibirTabuleiro(jogador1 ,lin, col);
            printf("\nMapa de defesa:\n");
            exibirTabuleiro(resultado1, lin, col);

            realizarJogada(jogador1, resultado2, &naviosRestantes2, lin, col, vezDoJogador, dificuldade);
            int verifica = verificaTabuleiro(resultado2, lin, col);

            if (verifica == 0){
                limparTela();
                printf("== Fim de Jogo ==\n");
                printf("Parabens, Jogador 1 venceu!\n");
                break;
            }

            printf("\nPressione enter para passar a vez...\n");
            getchar();
            getchar();

            vezDoJogador = 2;
        }
        else{
            limparTela();
            realizarJogada(jogador2, resultado1, &naviosRestantes1, lin, col, vezDoJogador, dificuldade);
            int verifica = verificaTabuleiro(resultado1, lin, col);

            if (verifica == 0){
                limparTela();
                printf("== Fim de Jogo ==\n");
                printf("Jogador 2 venceu.\n");
                break;
            }

            printf("\nPressione enter para continuar...\n");
            getchar();
            vezDoJogador = 1;
        }
    }

    for (int i = 0; i < lin; i++){
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

