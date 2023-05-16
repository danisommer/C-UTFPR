#include <stdio.h>
#define N 2048

void stling (char s[])
{
for (int i = 0; i < N; i++)
{
    if (s[i]=='r')
    {
        if (s[i+1]==' ' ||s[i+1]=='\0')
            break;
        else if (s[i+1]=='r')
        {
            s[i]='l';

            for (int j = 0; j < N; j++)
            {
                s[j+1] = s[j+2];
                j++;
            }

        }
        else
            s[i]='l';
    }
}

}
int main ()
{
    char s[N] = "Claudia eh uma jovem programadora que ficou intrigada pela sonoridade das 'risadas digitais'. Algumas delas ela nem mesmo consegue pronunciar";

    stling(s);

    printf("%s", s);

    return 0;   
}


/*
Escreva uma função stling, que recebe uma string s e um buffer (um vetor capaz de armazenar
outra string com o mesmo tamanho de s) e armazene no buffer uma versão de s com todos os R's
trocados por L's, exceto quando o R é a última letra de uma palavra. Dois R's seguidos devem ser
substituídos por um único L. Lembre-se de manter maiúsculas e minúsculas como no texto original.
*/