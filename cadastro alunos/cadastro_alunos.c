#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N_PROVAS 3
#define MAX_ALUNOS 100
#define NOTA_MINIMA_APROVACAO 6.0

typedef struct {
    char nome[100];
    char curso[100];
    float notas[N_PROVAS];
    int idade;
    int notasInseridas;
    float media;
    int aprovado;
} Cadastro;

int validarString(const char *str) {
    size_t tamanho = strlen(str);
    if (tamanho == 0 || tamanho > 100)
        return 0;

    for (size_t i = 0; i < tamanho; i++) {
        if (!isalpha(str[i]) && !isspace(str[i])) {
            return 0;
        }
    }

    return 1;
}

int validarIdade(int idade) {
    return idade >= 0 && idade <= 150;
}

int cadastrarAlunos(Cadastro **alunos, int *cadastrados) {
    if (*cadastrados >= MAX_ALUNOS) {
        printf("Limite de alunos atingido.\n");
        system("pause");
        return *cadastrados;
    }

    Cadastro *aluno = (Cadastro *)malloc(sizeof(Cadastro));

    printf("\nNome: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0';

    while (!validarString(aluno->nome)) {
        printf("Nome invalido. Insira novamente: ");
        fgets(aluno->nome, sizeof(aluno->nome), stdin);
        aluno->nome[strcspn(aluno->nome, "\n")] = '\0';
    }

    printf("\nCurso: ");
    fgets(aluno->curso, sizeof(aluno->curso), stdin);
    aluno->curso[strcspn(aluno->curso, "\n")] = '\0';

    while (!validarString(aluno->curso)) {
        printf("Curso invalido. Insira novamente: ");
        fgets(aluno->curso, sizeof(aluno->curso), stdin);
        aluno->curso[strcspn(aluno->curso, "\n")] = '\0';
    }

    printf("\nIdade: ");
    scanf("%d", &aluno->idade);
    getchar();

    while (!validarIdade(aluno->idade)) {
        printf("Idade invalida. Insira novamente: ");
        scanf("%d", &aluno->idade);
        getchar();
    }

    aluno->notasInseridas = 0;
    aluno->media = 0.0;
    aluno->aprovado = 0;

    alunos[*cadastrados] = aluno;
    (*cadastrados)++;
    return *cadastrados;
}

void inserirNotas(Cadastro **alunos, int cadastrados) {
    printf("Insira as notas dos alunos:\n");
    for (int i = 0; i < cadastrados; i++) {
        if (!alunos[i]->notasInseridas) {
            printf("\nAluno: %s\n", alunos[i]->nome);
            for (int j = 0; j < N_PROVAS; j++) {
                printf("Nota %d: ", j + 1);
                scanf("%f", &alunos[i]->notas[j]);
                getchar();
            }
            alunos[i]->notasInseridas = 1;
        }
    }
    printf("\nNotas inseridas com sucesso!\n");
    system("pause");
}

void calcularMedia(Cadastro **alunos, int cadastrados) {
    for (int i = 0; i < cadastrados; i++) {
        if (alunos[i]->notasInseridas) {
            float soma = 0.0;
            for (int j = 0; j < N_PROVAS; j++) {
                soma += alunos[i]->notas[j];
            }
            alunos[i]->media = soma / N_PROVAS;
        }
    }
}

void verificarAprovacao(Cadastro **alunos, int cadastrados) {
    for (int i = 0; i < cadastrados; i++) {
        if (alunos[i]->notasInseridas) {
            alunos[i]->aprovado = alunos[i]->media >= NOTA_MINIMA_APROVACAO ? 1 : 0;
        }
    }
}

void atualizarDadosAlunos(Cadastro **alunos, int cadastrados) {
    calcularMedia(alunos, cadastrados);
    verificarAprovacao(alunos, cadastrados);
}

void imprimeAlunos(Cadastro **alunos, int cadastrados) {
    system("cls");
    for (int i = 0; i < cadastrados; i++) {
        printf("------------------------------\n");
        printf("ALUNO %d:\n", i + 1);
        printf("Nome: %s | Curso: %s | Idade: %d\n", alunos[i]->nome, alunos[i]->curso, alunos[i]->idade);
    }
    system("pause");
}

void imprimeNotas(Cadastro **alunos, int cadastrados) {
    atualizarDadosAlunos(alunos, cadastrados);
    system("cls");
    for (int i = 0; i < cadastrados; i++) {
        if (alunos[i]->notasInseridas) {
            printf("------------------------------\n");
            printf("ALUNO %d:\n", i + 1);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Notas: ");
            for (int j = 0; j < N_PROVAS; j++) {
                printf("%.2f ", alunos[i]->notas[j]);
            }
            printf("\n");
            printf("Media: %.2f | ", alunos[i]->media);
            printf(alunos[i]->aprovado ? "Aprovado\n" : "Reprovado\n");
        }
    }
    system("pause");
}

int main() {
    Cadastro *alunos[MAX_ALUNOS];
    int cadastrados = 0;
    int ordem = 1;

    while (ordem != 5) {
        system("cls");
        printf("Digite:\n\n1 para cadastrar um novo aluno\n\n2 para inserir as notas dos alunos cadastrados\n\n3 para imprimir a lista de alunos cadastrados (numero de alunos: %d)\n\n4 para imprimir as notas dos alunos cadastrados\n\n5 para sair do programa\n\n", cadastrados);
        scanf("%d", &ordem);
        getchar();

        switch (ordem) {
            case 1:
                cadastrados = cadastrarAlunos(alunos, &cadastrados);
                break;
            case 2:
                inserirNotas(alunos, cadastrados);
                break;

            case 3:
                imprimeAlunos(alunos, cadastrados);
                break;
            case 4:
                imprimeNotas(alunos, cadastrados);
                break;
            case 5:
                printf("Adeus :)\n");
                break;
            default:
                printf("Opção invalida!\n");
                break;
        }
    }

    for (int i = 0; i < cadastrados; i++) {
        free(alunos[i]->nome);
        free(alunos[i]->curso);
        free(alunos[i]->notas);
        free(alunos[i]);
    }

    return 0;
}
