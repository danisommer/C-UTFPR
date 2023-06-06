#include <stdio.h>

typedef struct
{
    int horas;
    int minutos;
    char segundos; 
} Horario;

int segundosEntre (Horario h1, Horario h2)
{
    return ((h2.horas - h1.horas)*3600 + (h2.minutos - h1.minutos)*60 + (h2.segundos - h1.segundos));
}

int main ()
{
    Horario h1, h2;
    int seg;

    h1.horas = 5;
    h1.minutos = 30;
    h1.segundos = 12;

    h2.horas = 7;
    h2.minutos = 0;
    h2.segundos = 12;

    seg = segundosEntre(h1, h2);

    printf("%d segundos entre os dois horarios :)", seg);

    return 0;
}

/*
3. Escreva uma função que recebe 2 parâmetros do tipo Horario (com campos para hora, minutos e
segundos), h1 e h2, e retorna o número de segundos passados entre h1 e h2, supondo que h2 ocorre
depois de h1.
int segundosEntre (Horario h1, Horario h2);
*/