#include <stdio.h>

int main (){

    float renda, imposto;
    printf("Insira sua renda (em UTF): ");
    scanf ("%f", &renda);

    if (renda <= 1200.25){
        imposto = 0;
    } else if (renda > 1200.25 && renda <= 2300.5){
        imposto = (renda - 1200.25)*0.075;
    } else if (renda > 2300.5 && renda <= 3500.75){
        imposto = 82.51875 + (renda - 2300.5)*0.15;
    } else if (renda > 3500.75 && renda < 4000){
        imposto = 262.55625 + (renda - 3500.75)*0.225;
    } else {
        imposto = 374.8875 + (renda - 4000)*0.275;
    }

    if (imposto == 0){
        printf("Sem imposto!");
    } else if (imposto > 0){
        printf("%.2f", imposto);
    }


    return 0;
}

/*

0 At ́e 1.200,25
7,5% De 1.200.26 at ́e 2.300,50
15,0 % De 2.300,51 at ́e 3.500,75
22,5 % De 3.500,76 at ́e 4.000,00
27,5 % Acima de 4.000,00

5.000,00 649,89
3.800,50 330,00
2.500,20 112,47
2.000,11 59,99
1.500,13 22,49

*/
