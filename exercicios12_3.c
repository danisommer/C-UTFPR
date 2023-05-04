#include <stdio.h>

int alternante(int n, int *seq)
{
    int numero, anterior;

    for (int i=0; i<n; i++)
    {

        scanf("%d", &numero);


        if(numero%2==0 && anterior%2==0)
        {

            (*seq)++;
        }
        else if (numero%2==1 && anterior%2==1)
        {


        }

        anterior = numero;

    }


}

int main()
{

    int n, i, numero, seq=0;
    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    if ( alternante(n, &seq)==0)
    {

        printf("A sequencia é %d-alternante", seq);

    }
    else
    {

        printf("A sequencia não é alternante");

    }

    return 0;
}
