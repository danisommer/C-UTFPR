#include <stdio.h>
#define N 10

int corrigeProva(char respostas[], char gabarito[])
{
    int acertos = 0;
    for (int i = 0; i < N; i++)
    {
        if (respostas[i]==gabarito[i])
            acertos++;
    }
    return acertos;

}
int main ()
{
    char gabarito[N] = {"ACDEBADEBA"};
    char respostas[N];
    for(int i = 0; i < N; i++)
    {
        scanf(" %c", &respostas[i]);
    }
    printf("\n%d acertos", corrigeProva(respostas, gabarito));
    return 0;
}
