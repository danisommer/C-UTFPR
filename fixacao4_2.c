#include <stdio.h>

int main (){

    int anoNascimento, anoAtual = 2023, anoINSS, idade, contribuicao;
    printf("Insira seu ano de nascimento e o ano em que comecou a contribuir: ");
    scanf("%d %d", &anoNascimento, &anoINSS);

    idade = anoAtual - anoNascimento;
    contribuicao = anoAtual - anoINSS;

    if (idade < contribuicao || idade + contribuicao > 200){

        printf("Calculo invalido");
        return 0;

        }

    if ((idade > 65 || contribuicao > 30)||(idade > 60 && contribuicao > 25)){

        printf("Pode aposentar, %d anos e %d de contribuicao", idade, contribuicao);

    } else {

        printf("Nao pode aposentar, %d anos e %d de contribuicao", idade, contribuicao);

    }

    return 0;

}
