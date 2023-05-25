#include <stdio.h>
#include <stdlib.h>
#define M 9

int main ()
{
    int resposta_sudoku [M][M]  =  {{9, 5, 4, 8, 1, 6, 3, 7, 2},
                                    {7, 8, 6, 2, 5, 3, 1, 4, 9},
                                    {1, 2, 3, 7, 9, 4, 6, 5, 8},
                                    {3, 1, 8, 9, 7, 2, 4, 6, 5},
                                    {2, 7, 9, 4, 6, 5, 8, 1, 3},
                                    {4, 6, 5, 3, 8, 1, 9, 2, 7},
                                    {8, 4, 7, 1, 2, 9, 5, 3, 6},
                                    {5, 3, 2, 6, 4, 8, 7, 9, 1},
                                    {6, 9, 1, 5, 3, 7, 2, 8, 4}};

    int i, j, k, soma1=0, soma2=0, eh_possivel=1;

    for(i=0;i<M;i++)
        for(j=0;j<M;j++)
        {
            soma1 = 0;
            soma2 = 0;

            for(k=0;k<10;k++)
                if((resposta_sudoku[i][j]!=resposta_sudoku[i][k])&&(j!=k))
                    soma1+=1;

            for(k=0;k<10;k++)
                if((resposta_sudoku[i][j]!=resposta_sudoku[k][j])&&(i!=k))
                    soma2+=1;

            if(soma1>1||soma2>1)
                eh_possivel = 0;
        }

    if(eh_possivel==0)
        printf("Solucao impossivel");
    else
        printf("Solucao possivel");

return 0;
}
