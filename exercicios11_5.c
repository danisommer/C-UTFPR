#include <stdio.h>
#define TAMANHO_GRAFICO 10

int j=1;

int leProximoDado (int x){

    if (j>TAMANHO_GRAFICO){
        return x;

    }
    printf("\ninsira o valor da posicao %d: ", j);
    scanf("%d", &x);
    j++;
    return x;

}


void registraPadrao (int posicao, int tipo){

if(tipo == 1){
    printf("\npico na posicao %d\n", posicao);

}
if(tipo == 2){
    printf("\ndescida na posicao %d\n", posicao);

}
if(tipo == 3){
    printf("\nvale na posicao %d\n", posicao);

}
if(tipo == 4){
    printf("\nsubida na posicao %d\n", posicao);

}
}

int main (){

int n1, n2, n3, i;

    n1 =  leProximoDado(0);
    n2 =  leProximoDado(0);
    n3 =  leProximoDado(0);

    for (i=0;i<=TAMANHO_GRAFICO-3;i++){

        if (n2>n1 && n2>n3){

            registraPadrao(i+2,1);

        }
        if (n2<n1 && n2>n3){

            registraPadrao(i+2,2);

        }

        if (n2<n1 && n2<n3){

            registraPadrao(i+2,3);

        }
        if (n2>n1 && n2<n3){

            registraPadrao(i+2,4);

        }
        n1=n2;
        n2=n3;
        n3=leProximoDado(0);

    }

    return 0;
}