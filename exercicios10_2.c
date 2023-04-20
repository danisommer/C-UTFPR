#include <stdio.h>

double casasDecimais (double x){

    float res;
    res=x-(int)x;
    return res;


}

int main (){

    printf("%f", casasDecimais(4.684578));


    return 0;
}