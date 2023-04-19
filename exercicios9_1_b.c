#include <stdio.h>

int main (){

    int n1, n2, n3;

    for(n1=1; n1<=6; n1++){

        for(n2=1; n2<=6; n2++){

            for(n3=1; n3<=6; n3++){

            printf("%d %d %d \n", n1, n2, n3);

            }

        }

    }

    return 0;

}