#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 3

int main ()
{
    int matriz[LIN][COL], transposta[COL][LIN], i, j;

    for(i=0; i<LIN; i++)
        for(j=0; j<COL; j++)
            matriz[i][j]=rand()%20;

    for(i=0; i<LIN; i++)
    {
        for(j=0; j<COL; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");

    for(i=0; i<LIN; i++)
        for(j=0; j<COL; j++)
            transposta[j][i]=matriz[i][j];

    for(i=0; i<COL; i++)
    {
        for(j=0; j<LIN; j++)
            printf("%d ", transposta[i][j]);
        printf("\n");
    }
    return 0;
}
