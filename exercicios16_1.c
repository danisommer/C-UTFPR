#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024

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
    char string[MAX], *empacotada;
    fgets (string, MAX, stdin);

    empacotada = empacotaString(string);
    printf("\n%s", empacotada);

    free(empacotada);

    return 0;
}
