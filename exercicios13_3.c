#include <stdio.h>

int ehParDeFoolano (unsigned int n1, unsigned int n2)
{
    int cont[10];
    for(int j = 0; j<10; j++)
    {
    cont[j]=0;
    }

    while (n1 > 0)
    {
        cont[n1%10]++;
        n1/=10;
    }
    while (n2 > 0)
    {
        cont[n2%10]--;
        n2/=10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (cont[i]!=0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n1, n2, func;
    scanf("%d %d", &n1, &n2);

    func = ehParDeFoolano(n1, n2);

    if(func == 0)
        printf("nao eh par de foolano");
    else
        printf("eh par de foolano");
    return 0;
}
