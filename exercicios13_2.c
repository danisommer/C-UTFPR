#include <stdio.h>
#include <stdlib.h>
#define N 1024

int main()
{
    int max;
    scanf("%d", &max);
    int valores[N];


    for (int i = 0; i < max; i++)
    {
        scanf("%d", &valores[i]);
    }
    for (int j = max-1; j >= 0; j--)
    {
        printf("%d ", valores[j]);
    }
    return 0;
}
