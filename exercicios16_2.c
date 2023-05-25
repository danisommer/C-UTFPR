#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024

char* concatenaStrings (char* s1, char* s2)
{
    int i, j, tam1 = strlen(s1),  tam2 = strlen(s2);
    char *concatenada;

    concatenada = (char*) malloc(sizeof(char) * (tam1 + tam2 + 1));

    for(i=0; i < tam1; i++)
    {
        concatenada[i]=s1[i];
    }

    for(j=0; j < tam2; j++)
    {
        concatenada[tam1 + j]=s2[j];
    }

    concatenada[tam1+tam2]='\0';

    return concatenada;
}

int main ()
{
    char s1[] = {"ola tudo bem?"}, s2[] = {" meu nome eh daniel :)"}, *concatenada;

    concatenada = concatenaStrings(s1, s2);

    printf("%s", concatenada);

    free(concatenada);

    return 0;
}
