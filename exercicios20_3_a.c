#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define N_QUESTOES 10
#define N_ITENS 5
#define MAX 100

typedef struct
{
    int numero;
    char* nome;
    char* email;
    char* endereco;
    int** prova;
    float nota;
} Candidato;

void corrigeProva (Candidato* c, int** gabarito, int n_questoes, int n_itens)
{
    int valorItem = 100/(n_itens*n_questoes), nota = 0, i, j;

    for (i = 0; i < n_questoes; i++)
        for (j = 0; j < n_itens; j++)
            if (c->prova[i][j] == -1)
                continue;
            else if (c->prova[i][j] == gabarito[i][j])
                nota += valorItem;
            else
            {
                nota -= valorItem;
                if (nota < 0)
                    nota = 0;
            }
    printf("Nota: %d\n", nota);
}

int main ()
{
    int** gabarito;
    Candidato *aluno;
    int i, j, n_questoes = N_QUESTOES, n_itens = N_ITENS;

    gabarito = (int**)malloc(n_questoes * sizeof(int*));
    for (i = 0; i < n_questoes; i++)
        gabarito[i] = (int*)malloc(n_itens * sizeof(int));
    aluno = (Candidato*)malloc(sizeof(Candidato));
    aluno->nome = (char*)malloc(MAX*sizeof(char));
    aluno->email = (char*)malloc(MAX*sizeof(char));
    aluno->endereco = (char*)malloc(MAX*sizeof(char));
    aluno->prova = (int**)malloc(n_questoes * sizeof(int*));
    for (i = 0; i < n_questoes; i++)
        aluno->prova[i] = (int*)malloc(n_itens * sizeof(int));

    printf("Nome: ");
    fgets(aluno->nome, MAX, stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0';
    printf("email: ");
    fgets(aluno->email, MAX, stdin);
    printf("endereco: ");
    fgets(aluno->endereco, MAX, stdin);

    srand(time(NULL));

    for(i=0; i<n_questoes; i++)
        for(j=0; j<n_itens; j++)
            aluno->prova[i][j] = (rand()%3)-1;

    for(i=0; i<n_questoes; i++)
        for(j=0; j<n_itens; j++)
            gabarito[i][j] = rand()%2;

    corrigeProva(aluno, gabarito, n_questoes, n_itens);

    printf("Prova do aluno %s: \n", aluno->nome);
    for (i = 0; i < n_questoes; i++)
    {
        for (j = 0; j < n_itens; j++)
            printf("%3d ", aluno->prova[i][j]);
        printf("\n");
    }
    printf("\nGabarito: \n");

    for (i = 0; i < n_questoes; i++)
    {
        for (j = 0; j < n_itens; j++)
            printf("%3d ", gabarito[i][j]);
        printf("\n");
    }

    free(aluno->nome);
    free(aluno->email);
    free(aluno->endereco);
    for (i = 0; i < n_questoes; i++)
        free(aluno->prova[i]);
    free(aluno->prova);
    free(aluno);
    return 0;
}
