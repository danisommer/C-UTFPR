#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define N_QUESTOES 10
#define N_ITENS 5
#define MAX 100
#define NOTA_FASE2 10

typedef struct
{
    int numero;
    char* nome;
    char* email;
    char* endereco;
    int** prova;
    float nota;
} Candidato;

void corrigeProva(Candidato* c, int** gabarito, int n_questoes, int n_itens)
{
    int valorItem = 100 / (n_itens * n_questoes), nota = 0, i, j;

    for (i = 0; i < n_questoes; i++)
        for (j = 0; j < n_itens; j++)
            if (c->prova[i][j] == -1)
                continue;
            else if (c->prova[i][j] == gabarito[i][j])
                nota += valorItem;
            else if (c->prova[i][j] != gabarito[i][j] && nota > 0)
                nota -= valorItem;
    
    c->nota = nota;
     printf("Nota do candidato %s: %.2f\n", c->nome, c->nota);
}

void convocaParaFase2(char* nome, char* email, float nota)
{
    if (nota >= NOTA_FASE2)
        printf("Parabens, %s! Voce foi convocado(a) para a segunda fase do concurso.\n", nome);
    else
        printf("Desculpe, %s. Seu desempenho nao atingiu a nota minima para a segunda fase do concurso.\n", nome);
}

void computaResultados(Candidato* candidatos, int n, int** gabarito)
{
    int i;
    for (i = 0; i < n; i++)
    {
        corrigeProva(&candidatos[i], gabarito, N_QUESTOES, N_ITENS);
        convocaParaFase2(candidatos[i].nome, candidatos[i].email, candidatos[i].nota);
    }
}

int main()
{
    int** gabarito;
    Candidato candidatos[10];
    int i, j;

    gabarito = (int**)malloc(N_QUESTOES * sizeof(int*));
    for (i = 0; i < N_QUESTOES; i++)
        gabarito[i] = (int*)malloc(N_ITENS * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < N_QUESTOES; i++)
        for (j = 0; j < N_ITENS; j++)
            gabarito[i][j] = rand() % 2;

    for (i = 0; i < 10; i++)
    {
        candidatos[i].numero = i + 1;
        candidatos[i].nome = (char*)malloc(MAX * sizeof(char));
        candidatos[i].email = (char*)malloc(MAX * sizeof(char));
        candidatos[i].endereco = (char*)malloc(MAX * sizeof(char));
        candidatos[i].prova = (int**)malloc(N_QUESTOES * sizeof(int*));

        for (j = 0; j < N_QUESTOES; j++)
            candidatos[i].prova[j] = (int*)malloc(N_ITENS * sizeof(int));

        printf("Candidato %d\n", candidatos[i].numero);
        printf("Nome: ");
        fgets(candidatos[i].nome, MAX, stdin);
        candidatos[i].nome[strcspn(candidatos[i].nome, "\n")] = '\0';
        printf("Email: ");
        fgets(candidatos[i].email, MAX, stdin);
        candidatos[i].email[strcspn(candidatos[i].email, "\n")] = '\0';
        printf("Endereco: ");
        fgets(candidatos[i].endereco, MAX, stdin);
        candidatos[i].endereco[strcspn(candidatos[i].endereco, "\n")] = '\0';

        printf("Prova do candidato %s:\n", candidatos[i].nome);
        for (j = 0; j < N_QUESTOES; j++)
        {
            for (int k = 0; k < N_ITENS; k++)
            {
                candidatos[i].prova[j][k] = (rand() % 3) - 1;
                printf("%3d ", candidatos[i].prova[j][k]);
            }
            printf("\n");
        }

        printf("\n");
    }

    computaResultados(candidatos, 10, gabarito);

    for (i = 0; i < N_QUESTOES; i++)
        free(gabarito[i]);
    free(gabarito);

    for (i = 0; i < 10; i++)
    {
        free(candidatos[i].nome);
        free(candidatos[i].email);
        free(candidatos[i].endereco);
        for (j = 0; j < N_QUESTOES; j++)
            free(candidatos[i].prova[j]);
        free(candidatos[i].prova);
    }

    return 0;
}
