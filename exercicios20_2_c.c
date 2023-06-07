#include <stdlib.h>
#include <stdio.h>

#define LARG 4
#define ALT 6

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

void preencheMatriz()
{
    GSImage* imagem = criaGSImage(LARG, ALT), *reduzida;
    float mediaOriginal = 0.0, mediaReduzida = 0.0;

    for (int i = 0; i < imagem->largura; i++)
        for (int j = 0; j < imagem->altura; j++)
            imagem->dados[i][j] = i * j;
        
    printf("Matriz Original:\n");
    for (int i = 0; i < imagem->largura; i++)
    {
        for (int j = 0; j < imagem->altura; j++)
            printf("%d ", imagem->dados[i][j]);
        printf("\n");
    }

    for (int i = 0; i < imagem->largura; i++)
        for (int j = 0; j < imagem->altura; j++)
            mediaOriginal += imagem->dados[i][j];
    
    mediaOriginal /= (imagem->largura * imagem->altura);
    printf("Media dos valores dos pixels da imagem original: %.2f\n", mediaOriginal);

    reduzida = reduzPelaMetade(imagem);

    printf("\nMatriz Reduzida:\n");
    for (int i = 0; i < reduzida->largura; i++)
    {
        for (int j = 0; j < reduzida->altura; j++)
            printf("%d ", reduzida->dados[i][j]);
        printf("\n");
    }

    for (int i = 0; i < reduzida->largura; i++)
        for (int j = 0; j < reduzida->altura; j++)
            mediaReduzida += reduzida->dados[i][j];
        
    mediaReduzida /= (reduzida->largura * reduzida->altura);
    printf("Media dos valores dos pixels da imagem reduzida: %.2f\n", mediaReduzida);

    destroiGSImage(imagem);
    destroiGSImage(reduzida);
}

int main()
{
    preencheMatriz();

    return 0;
}
