#include <stdio.h>


int main (){

    int num;
    scanf("%d", &num);

    if ((num % 2 == 0 && num > 10) || (num % 2 != 0 && num <50)){

        printf("SIM");

    } else {

        printf("Nao");

    }

    return 0;

}
