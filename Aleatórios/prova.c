#include <stdio.h>
#define N 9

int main ()
{
    int i, j, k;

    for (i=0; i<N; i++){

        for(j=0; j<N-1-i; j++)
        {
            printf(" ");
        }        
        for(k=0; k<2*i+1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}