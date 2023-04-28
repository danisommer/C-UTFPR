#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */
void pontoRolo1 ()
{
    printf(" ");

}

void pontoRolo2(int x)
{
    if (x%2==0)
    {
        printf("v");

    }
    else
    {
        printf("a");

    }
}

void rolaTecido ()
{

    printf("\n");
}

void main ()
{
    int i, j, letra=2;
    /* Funciona até desligar ou o tecido acabar. */
    while (1)
    {
        for (i = 1; i <= LARGURA_FAIXA; i++)
        {
            for(j=0; j<LARGURA_FAIXA - i; j++)
            {
                pontoRolo1();

            }
            for(j=0; j<i; j++)
            {
                pontoRolo2(letra);

            }
            rolaTecido ();
        }
        letra += 1;
    }