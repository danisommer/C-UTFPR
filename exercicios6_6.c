#include <stdio.h>

int main (){

    float n, calculo = 0, j = 0.0;
    int i;
    scanf("%f", &n);

    for (i = 0; i < n; i++){

        if(i%2 == 0){
            calculo += 4*(1/(1+2*j));

        } else {
            calculo -= 4*(1/(1+2*j));

        }

        j++;
    }
    printf("O valor de pi eh: %f", calculo);

    return 0;
}


//4(±1/(1+2n)


/*
 
 )
() 6. Segundo Leibniz,

Com base na série acima, faça um programa que calcule o valor aproximado de π, com o número de
termos sendo dado por uma constante N_TERMOS, definida pela diretiva de pré-processamento
#define. Quantos termos você precisou somar para ter uma boa aproximação?
*/