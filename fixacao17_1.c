#define N_LINHAS 7
#define N_COLUNAS 5
int main ()
{
    int i, j;
    int matriz_foo [N_LINHAS][N_COLUNAS];

    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
            printf("%d%d ", i, j);

        printf("\n");
    }
    return (0);
}

/*
00 01 02 03 04 
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44
50 51 52 53 54
60 61 62 63 64

*/