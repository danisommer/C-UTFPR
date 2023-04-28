#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */
void pontoRolo1 ()
{

    printf("a");
}

void pontoRolo2()
{

    printf("v");
}

void rolaTecido ()
{

    printf("\n");
}

void main ()
{
    int i, j;
    /* Funciona até desligar ou o tecido acabar. */
    while (1)
    {
        for (i = 0; i <= LARGURA_FAIXA; i++)
        {
            for(j=0; j<LARGURA_FAIXA - i; j++)
            {
                pontoRolo1();

            }
            for(j=0; j<i; j++)
            {
                pontoRolo2();

            }
            rolaTecido ();
        }
    }
}