#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* empacotaString (char *string)
{
    int i, tam = strlen(string);
    char *empacotada;

    empacotada = (char*) malloc (sizeof(char)*(tam+1));

    for(i = 0; i < tam; i++)
        empacotada[i]=string[i];

    empacotada[tam+1]='\0';
    return empacotada;
}
int main()
{
    char string[]="ola tudo bem", *empacotada;

    empacotada = empacotaString(string);
    printf("%lu", strlen(empacotada));
    free(empacotada);

    return 0;
}
