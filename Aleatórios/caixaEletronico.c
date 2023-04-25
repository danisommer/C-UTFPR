#include<stdio.h>

int main() {

    printf("Para sacar 320 reais, serao necessarios:\n");
    printf("%d notas de 50 \n", 320/50);
    printf("%d notas de 5 \n", 320%50/5);
    printf("%d notas de 1 \n", 320%50%5/1);

    return 0;


}
