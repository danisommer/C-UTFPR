#include <stdio.h>

void segundosParaHMS (int total_segundos, int *h, int *m, int *s){

    *h = total_segundos/3600;
    *m = (total_segundos%3600)/60;
    *s = total_segundos - *m*60 - *h*3600;

}

int main (){

    int h, m, s;

    segundosParaHMS(3920, &h, &m, &s);

    printf("%dh %dm %ds", h, m, s);

    return 0;
}
