#include <stdio.h>
#define N 100

int main ()
{
    int areas[N], max, soma1=0, soma2=0, media, j=0;
    printf("digite quantos terrenos serao somados: ");
    scanf("%d", &max);

    for (int i = 0; i < max; i++)
    {
        printf("digite a area do terreno %d: ", i+1);
        scanf("%d", &areas[i]);
        soma1 += areas[i];
    }
    media = soma1/2;
    while (soma2 < media)
    {
        soma2 += areas[j];
        j++;
    }
    printf("a divisao deve ocorrer depois do terreno %d", j);
    return 0;
}
