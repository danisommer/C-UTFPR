#include <stdio.h>

int main (){

    int horas1, min1, seg1, horas2, min2, seg2, somaH, somaM, somaS;
    printf("Insira o primeiro horario (h:m:s): ");
    scanf("%d:%d:%d", &horas1, &min1, &seg1);
    printf("Insira o segundo horario (h:m:s): ");
    scanf("%d:%d:%d", &horas2, &min2, &seg2);

    if ((min1 > 0 && min1 < 60 && seg1 > 0 && seg1 < 60)&&(min2 > 0 && min2 < 60 && seg2 > 0 && seg2 < 60)){  

        somaH = horas1 + horas2;
        somaM = min1 + min2;
        somaS = seg1 + seg2;

        if (somaM > 60){
            somaH += 1;
            somaM -= 60;
        } 
        if (somaS > 60){
            somaM += 1;
            somaS -= 60;
        }

        printf("Soma dos horarios: %d horas, %d minutos e %d segundos", somaH, somaM, somaS);
           

    } else printf("ERRO");
        

    return 0;
}

/*
5. Escreva um programa que lê duas entradas no formato “hora:minuto:segundo” e as soma. O
número de segundos e minutos deve ficar sempre entre 0 e 59. O programa deve testar as entradas,
para conferir se elas não são inválidas.
*/