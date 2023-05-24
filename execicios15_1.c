#include <stdio.h>
#define MAX 100

int main ()
{
    int numeroPedras, numeroSapos, posicao, distanciaPulo, pedras[MAX];
    scanf("%d %d", &numeroPedras, &numeroSapos);

    for(int i = 0; i  < numeroSapos; i++)
    {
        scanf("%d %d", &posicao, &distanciaPulo);
        pedras[posicao]=1;
        while (posicao + distanciaPulo <= numeroPedras)
        {
            pedras[posicao] = 1;
            posicao+= distanciaPulo;
        }
        while (posicao - distanciaPulo >= 0)
        {
            pedras[posicao] = 1;
            posicao-= distanciaPulo;
        }
    }
    for (int j = 0; j < numeroPedras; j++)
    {
    if (pedras[j]!= 1)
        pedras[j]=0;

    printf("%d ", pedras[j]);

    }

    return 0;
}


/*
O programa recebe como entradas dois inteiros N e M (ambos no intervalo [1, 100], que representam o
número de pedras no rio e o número de sapos, respectivamente. São então lidos M pares de valores,
cada par contendo a posição inicial de um sapo e a distância fixa de um pulo, ambos valores no
intervalo [0, N]. Considere que a primeira pedra corresponde à posição 0, a segunda pedra à posição
1, etc. Desta forma, a última pedra tem a posição N-1.

O programa deve mostrar N valores, que indicam a possibilidade ou não de ter um sapo em cada
pedra. Para as pedras que podem ter um sapo você deve imprimir 1, e para as pedras que com
certeza não podem ter nenhum sapo você deve imprimir 0.
*/
