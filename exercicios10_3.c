#include <stdio.h>

int proxFibonacci (int n){

    int var1=0, var2=1, resposta, i;

    for(i=0; i<n;i++){

        resposta = var1 + var2;
        var1=var2;
        var2=resposta;

        if(resposta > n){
            return resposta;
        }

    }

}
/* teste
int main (){

    printf("%d ", proxFibonacci(15));

    return 0;
}

*/