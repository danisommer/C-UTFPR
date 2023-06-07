#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int largura;
    int altura;
    unsigned char** dados;
} GSImage;

GSImage* criaGSImage(int largura, int altura)
{
    GSImage* imagem;
    int i;
    imagem = (GSImage*)malloc(sizeof(GSImage));
    imagem->largura = largura;
    imagem->altura = altura;
    imagem->dados = (unsigned char**)malloc(largura * sizeof(unsigned char*));
    for (i = 0; i < largura; i++)
        imagem->dados[i] = (unsigned char*)malloc(altura * sizeof(unsigned char));

    return imagem;
}

void destroiGSImage(GSImage* img)
{
    for (int i = 0; i < img->largura; i++)
        free(img->dados[i]);
    free(img->dados);
    free(img);
}
int main()
{
    int largura = 4;
    int altura = 6;

    GSImage* imagem = criaGSImage(largura, altura);

    for (int i = 0; i < largura; i++)
    {
        for (int j = 0; j < altura; j++)
        {
            imagem->dados[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < largura; i++)
    {
        for (int j = 0; j < altura; j++)
        {
            printf("%d ", imagem->dados[i][j]);
        }
        printf("\n");
    }

    destroiGSImage(imagem);

    return 0;
}


