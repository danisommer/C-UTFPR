#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 4

int main ()
{

    int matriz[LIN][COL]={{81, 28, 240, 10},
                         {40, 10, 100, 240},
                         {20, 180, 110, 35}};
 
    int i, j, soma1 = 0, maior1=0, soma2 = 0, maior2=0;

    for(i=0; i<LIN; i++)
    {
        for(j=0; j<COL; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");

    for(i=0; i < LIN; i++)
    {
        soma1=0;
        for(j=0; j < COL; j++)
            soma1+=matriz[i][j];

        if(soma1>maior1)
            maior1=soma1;
    }
    for(i=0; i < COL; i++)
    {
        soma2=0;
        for(j=0; j < LIN; j++)
            soma2+=matriz[j][i];

        if(soma2>maior2)
            maior2=soma2;
    }

    if(maior1<maior2)
        maior1 = maior2;

    printf("%d", maior1);

    return 0;
}