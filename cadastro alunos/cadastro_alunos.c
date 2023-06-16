#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N_PROVAS 3
#define MAX_ALUNOS 100
#define NOTA_MINIMA_APROVACAO 6.0

typedef struct {
    char *nome;
    char *curso;
    float *notas;
    int idade;
    int notasInseridas;
    float media;
    int aprovado;
} Cadastro;

int validarNome(const char *nome) {
    size_t tamanho = strlen(nome);
    if (tamanho == 0 || tamanho > 100)
        return 0;

    for (size_t i = 0; i < tamanho; i++) {
        if (!isalpha(nome[i]) && !isspace(nome[i])) {
            return 0;
        }
    }

    return 1;
}

int validarCurso(const char *curso) {
    size_t tamanho = strlen(curso);
    if (tamanho == 0 || tamanho > 100)
        return 0;

    for (size_t i = 0; i < tamanho; i++) {
        if (!isalpha(curso[i]) && !isspace(curso[i])) {
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

    alunos[*cadastrados] = (Cadastro *)malloc(sizeof(Cadastro));
    alunos[*cadastrados]->nome = (char *)malloc(100 * sizeof(char));
    alunos[*cadastrados]->curso = (char *)malloc(100 * sizeof(char));

    system("cls");
    printf("\nNome: ");
    fgets(alunos[*cadastrados]->nome, 100, stdin);
    alunos[*cadastrados]->nome[strcspn(alunos[*cadastrados]->nome, "\n")] = '\0';

    while (!validarNome(alunos[*cadastrados]->nome)) {
        printf("Nome inválido. Insira novamente: ");
        fgets(alunos[*cadastrados]->nome, 100, stdin);
        alunos[*cadastrados]->nome[strcspn(alunos[*cadastrados]->nome, "\n")] = '\0';
    }

    printf("\nCurso: ");
    fgets(alunos[*cadastrados]->curso, 100, stdin);
    alunos[*cadastrados]->curso[strcspn(alunos[*cadastrados]->curso, "\n")] = '\0';

    while (!validarCurso(alunos[*cadastrados]->curso)) {
        printf("Curso inválido. Insira novamente: ");
        fgets(alunos[*cadastrados]->curso, 100, stdin);
        alunos[*cadastrados]->curso[strcspn(alunos[*cadastrados]->curso, "\n")] = '\0';
    }

    printf("\nIdade: ");
    scanf("%d", &alunos[*cadastrados]->idade);
    getchar();

    while (!validarIdade(alunos[*cadastrados]->idade)) {
        printf("Idade inválida. Insira novamente: ");
        scanf("%d", &alunos[*cadastrados]->idade);
        getchar();
    }

    alunos[*cadastrados]->notas = NULL;
    alunos[*cadastrados]->notasInseridas = 0;
    alunos[*cadastrados]->media = 0.0;
    alunos[*cadastrados]->aprovado = 0;

    (*cadastrados)++;
    return *cadastrados;
}

void inserirNotas(Cadastro **alunos, int cadastrados) {
    system("cls");
    printf("Insira as notas dos alunos:\n");
    for (int i = 0; i < cadastrados; i++) {
        if (!alunos[i]->notasInseridas) {
            printf("\nAluno: %s\n", alunos[i]->nome);
            alunos[i]->notas = (float *)malloc(N_PROVAS * sizeof(float));
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
            if (alunos[i]->media >= NOTA_MINIMA_APROVACAO) {
                alunos[i]->aprovado = 1;
            } else {
                alunos[i]->aprovado = 0;
            }
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
        printf("ALUNO %d:\n", i);
        printf("Nome: %s | ", alunos[i]->nome);
        printf("Curso: %s |", alunos[i]->curso);
        printf("Idade: %d\n", alunos[i]->idade);
    }
    system("pause");
}

void imprimeNotas(Cadastro **alunos, int cadastrados) {
    atualizarDadosAlunos(alunos, cadastrados);
    system("cls");
    for (int i = 0; i < cadastrados; i++) {
        if (alunos[i]->notasInseridas) {
            printf("------------------------------\n");
            printf("ALUNO %d:\n", i);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Notas: ");
            for (int j = 0; j < N_PROVAS; j++) {
                printf("%.2f ", alunos[i]->notas[j]);
            }
            printf("\n");
            printf("Media: %.2f | ", alunos[i]->media);
            if (alunos[i]->aprovado) {
                printf("Aprovado\n");
            } else {
                printf("Reprovado\n");
            }
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
                printf("Opcao invalida!\n");
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
