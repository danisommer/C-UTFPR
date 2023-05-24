int contador(char string[])
{
    int i = 0, contador = 1;

    while (string[i]!='\0')
    {
        if(string[i]==' '||((string[i]>='0')&&(string[i]<='9')))
            contador++;

        i++;
    }
    return contador;
}
int main()
{
    char string[] = {"ola tudo bem? abc1de"};
    printf("%d", contador(string));

    return 0;
}

/*
A contagem de palavras em um texto é uma funcionalidade básica encontrada em vários
softwares para edição de texto. Existem também sofwares e websites dedicados unicamente a esta
simples tarefa!
Escreva uma função que recebe como parâmetro apenas uma string, e retorna o número de palavras
que existem nela, supondo que uma palavra contém apenas letras – ou seja, números, espaços,
pontuação e quaisquer outros caracteres são tratados como divisores entre palavras. Suponha que a
string é terminada em '\0', e não use funções da biblioteca-padrão. Os tamanhos da string e do
buffer que a contém são desconhecidos a priori.
*/
