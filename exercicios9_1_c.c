#include <stdio.h>

int main (){

    int n1, n2, n3, contador=0;

    for(n1=1; n1<=6; n1++){

    contador=0;

        for(n2=1; n2<=6; n2++){
            
            for(n3=1; n3<=6; n3++){
                
                if(n3+contador > 6){
                    continue;
                }

                printf("%d %d %d \n", n1, n2, n3+contador);

            }

        contador++;

        }

    }

    return 0;

}