#include <stdio.h>
#define N 50

int main ()
{
    int minas[N], respostas[N], soma;

    for (int i = 0; i < N; i++)
    {
        respostas[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        scanf ("%d", &minas[i]);
    }

    for (int j = 0; j < N; j++)
    {
        if (j == 0)
        {
            soma = minas[0] + minas[1];
        }
        else if (j == N-1)
        {
            soma = minas[N-2] + minas[N-1];
        }
        else
        {
            soma = minas[j-1] + minas[j] + minas[j+1];
        }
        respostas[j] = soma;
    }

    printf("\n");

    for (int k = 0; k < N; k++)
    {
        printf("%d ", respostas[k]);
    }

    return 0;
}
