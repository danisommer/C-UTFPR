#include <stdio.h>

int main (){

    int n1 = 10, n2 = 0, contagem = 0;
    while (n1 < 100){

        n2 += 1;
        if (n2%100 == 0){
            n1 += 1;
        }

        if (n2 > 100){

            n2 = 0;
        }

        if ((n1 + n2)*(n1 + n2) == (n1*100 + n2)){
            printf("%d%.2d ", n1, n2);
            }

    contagem ++;

    }
   
    return 0;

}







/*(x + y)^2 = x*10^2 + y


x 10 -> 99 


y 00 -> 99


(**) 2. O número 3025 possui a seguinte caracterı́stica: 30 + 25 = 55 → 55 55 = 3025. Escreva um ∗
programa que mostre todos os números de 4 algarismos com a mesma característica do número 3025.


*/