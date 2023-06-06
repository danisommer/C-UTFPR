#include <stdio.h>
#include <string.h> 

typedef struct
{
    int n_mes;
    int n_dias;
    char nome[4]; 
} Mes;

int main()
{
    Mes ano[12];
    int n_mes;

    ano[0].n_dias = 31;
    ano[1].n_dias = 28;
    ano[2].n_dias = 31;
    ano[3].n_dias = 30;
    ano[4].n_dias = 31;
    ano[5].n_dias = 30;
    ano[6].n_dias = 31;
    ano[7].n_dias = 31;
    ano[8].n_dias = 30;
    ano[9].n_dias = 31;
    ano[10].n_dias = 30;
    ano[11].n_dias = 31;

    strcpy(ano[0].nome, "JAN");
    strcpy(ano[1].nome, "FEV");
    strcpy(ano[2].nome, "MAR");
    strcpy(ano[3].nome, "ABR");
    strcpy(ano[4].nome, "MAI");
    strcpy(ano[5].nome, "JUN");
    strcpy(ano[6].nome, "JUL");
    strcpy(ano[7].nome, "AGO");
    strcpy(ano[8].nome, "SET");
    strcpy(ano[9].nome, "OUT");
    strcpy(ano[10].nome, "NOV");
    strcpy(ano[11].nome, "DEZ");

    scanf("%d", &n_mes);

    printf("O mes de %d (%s) tem %d dias.\n", n_mes, ano[n_mes - 1].nome, ano[n_mes - 1].n_dias);

    return 0;
}
