#include <stdio.h>

int main (){

    int dia = 30, mes = 3, ano = 2023;
    int diaAniver, mesAniver, anoAniver;
    printf("Insira o dia de hoje: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Insira o seu aniversario: "); 
    scanf("%d/%d/%d", &diaAniver, &mesAniver, &anoAniver);

    if (dia > 31 || dia < 1 || dia > 31 || dia < 1 ) {printf("ERRO AO CALCULAR");return 0;} 
    
    if (mes > 12 || mes < 1 || mesAniver > 12 || mesAniver < 1 ) {printf("ERRO AO CALCULAR");return 0;} 

    if (ano > 2100 || ano < 1900 || anoAniver > ano || anoAniver < 1900 || anoAniver > 2023) { printf("ERRO AO CALCULAR"); return 0;} 

    if (mes >= mesAniver){

        if ((dia >= diaAniver) || (mes > mesAniver)){

        printf("Ja fez aniversario! %d anos, ", ano - anoAniver);

        } else {printf("Não fez aniversario! %d anos, ", ano - anoAniver - 1);}

    } else {printf("Nao fez aniversario! %d anos, ", ano - anoAniver - 1);}


    if (mes  >= mesAniver){printf("%d meses e ", mes - mesAniver);}
    else printf("%d meses e ", (12 - mesAniver + mes));

    if (dia  >= diaAniver){printf("%d dias.", dia - diaAniver);}
    else printf("%d dias.", (diaAniver - dia));

    return 0;

}
