#include <stdio.h>

double casasDecimais (double x){

    float res;
    res=x-(int)x;
    return res;


}
/* teste
int main (){

    printf("%f", casasDecimais(4.688));


    return 0;
}
*/