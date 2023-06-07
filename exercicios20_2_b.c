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

GSImage* reduzPelaMetade(GSImage* img)
{
    int alt = img->altura;
    int lar = img->largura;
    GSImage* imagem = criaGSImage(lar / 2, alt / 2);

    for (int i = 0; i < lar / 2; i++)
    {
        for (int j = 0; j < alt / 2; j++)
        {
            int pixel1 = img->dados[i * 2][j * 2];
            int pixel2 = img->dados[i * 2][j * 2 + 1];
            int pixel3 = img->dados[i * 2 + 1][j * 2];
            int pixel4 = img->dados[i * 2 + 1][j * 2 + 1];

            imagem->dados[i][j] = (pixel1 + pixel2 + pixel3 + pixel4) / 4;
        }
    }

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
    int largura = 8;
    int altura = 4;

    GSImage* imagem = criaGSImage(largura, altura);
    GSImage* reduzida;

    for (int i = 0; i < largura; i++)
        for (int j = 0; j < altura; j++)
            imagem->dados[i][j] = rand()%10;
    
    for (int i = 0; i < largura; i++)
    {
        for (int j = 0; j < altura; j++)
            printf("%d ", imagem->dados[i][j]);
        printf("\n");
    }

    reduzida = reduzPelaMetade (imagem);
    printf("\n");

    for (int i = 0; i < largura/2; i++)
    {
        for (int j = 0; j < altura/2; j++)
            printf("%d ", reduzida->dados[i][j]);
        printf("\n");
    }

    destroiGSImage(imagem);
    destroiGSImage(reduzida);

    return 0;
}


