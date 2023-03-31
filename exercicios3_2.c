#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    srand(time(0));

    int random_number = rand() % 999 + 100, reverse = 0, rem;

    printf("O numero aleatorio eh: %d\n", random_number);

    while (random_number != 0) {

        rem = random_number%10;
        reverse = reverse * 10 + rem;
        random_number/=10;


    }

    printf("Numero invertido: %d ", reverse);


    return 0;

}
