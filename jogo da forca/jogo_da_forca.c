#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#define N_PALAVRAS 33

char* selecionaPalavra()
{
    char *bancoDeDados[] = {"mula", "mamute", "arara", "hamster", "lesma","coala", "coelho", "tubarao", "bufalo", "leao", "egua", "mosquito", "tigre", "gafanhoto", "aguia", "formiga", "galo", "guaxinim", "ema", "rena", "sapo", "pinguim", "mamute", "javali", "hiena", "galo", "boi", "mosquito", "porco", "orangotango", "cavalo", "alce", "galinha"};
    srand(time(NULL));
    return bancoDeDados[rand() % N_PALAVRAS];
}

void IniciaJogo(char *palavra, int n)
{
    int tam = strlen(palavra), erros = 0, acertos = 0, i, ciclo;
    char letrasUsadas[26] = {0};

    while (erros <= n && acertos < tam)
    {
        system("cls");
        printf("Palavra: ");
        for (i = 0; i < tam; i++)
        {
            if (letrasUsadas[palavra[i] - 'a'])
                printf("%c", palavra[i]);
            else
                printf("_");
        }
        printf("\n");

        printf("Letras usadas: ");
        for (i = 0; i < 26; i++)
            if (letrasUsadas[i])
                printf("%c ", 'a' + i);
        
        printf("\n");

        if (erros == 0)
            printf("------\n|     \n|     \n|     \n");
        else if (erros == 1)
            printf("---|--\n|  o \n|     \n|     \n");
        else if (erros == 2)
            printf("---|--\n|  o \n|  |  \n|     \n");
        else if (erros == 3)
            printf("---|--\n|  o \n| /|  \n|     \n");
        else if (erros == 4)
            printf("---|--\n|  o \n| /|\\ \n|     \n");
        else if (erros == 5)
            printf("---|--\n|  o \n| /|\\ \n| /   \n");
        else if (erros == 6)
        {
            printf("---|--\n|  o \n| /|\\ \n| / \\ \n");
            break;
        }

        char letra;
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        letrasUsadas[letra - 'a'] = 1; 

        int encontrou = 0;
        for (i = 0; i < tam; i++)
            if (letra == palavra[i])
            {
                encontrou = 1;
                acertos++;
            }
        if (!encontrou)
            erros++;
    }

    system("cls");

    printf("Palavra: ");
    for (i = 0; i < tam; i++)
        printf("%c", palavra[i]);
    
    printf("\n");

    if (acertos == tam)
        printf("Parabens, voce venceu!\n");
    else
        printf("Voce perdeu! Tente novamente.\n");

    printf("\npressione qualquer tecla para reiniciar ");
    getch();
}
int main()
{
    char *palavra;
    int tentativas = 6;
    while(1)
    {
    palavra = selecionaPalavra();
    IniciaJogo(palavra, tentativas);
    }
    return 0;
}