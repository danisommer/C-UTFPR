#include <stdio.h>
#define TAMANHO_GRAFICO 24

int j=1;

int leProximoDado (int x){

    if (j>TAMANHO_GRAFICO){
        return 0;

    }
    printf("\ninsira a quantidade de pessoas as %.2dh00: ", j);
    scanf("%d", &x);
    j++;
    return x;

}


void registraPadrao (int posicao, int tipo){

if(tipo == 1){
    printf("\npico no horario %.2dh00\n", posicao);

}
if(tipo == 2){
    printf("\ndescida no horario %.2dh00\n", posicao);

}
if(tipo == 3){
    printf("\nvale no horario %.2dh00\n", posicao);

}
if(tipo == 4){
    printf("\nsubida no horario %.2dh00\n", posicao);

}
}

int main (){

int n1, n2, n3, i;

    n1 =  leProximoDado(0);
    n2 =  leProximoDado(0);
    n3 =  leProximoDado(0);

    for (i=2;i<=TAMANHO_GRAFICO-1;i++){

        if (n2>n1 && n2>n3){

            registraPadrao(i,1);

        }
        if (n2<n1 && n2>n3){

            registraPadrao(i,2);

        }

        if (n2<n1 && n2<n3){

            registraPadrao(i,3);

        }
        if (n2>n1 && n2<n3){

            registraPadrao(i,4);

        }
        n1=n2;
        n2=n3;
        n3=leProximoDado(0);

    }

    return 0;
}