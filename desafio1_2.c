# include <stdio.h >

int main (){
    int idade , matricula , cod;
    float peso;

     scanf ("%d", cod); //o certo é &cod
     scanf ("%d %f", &peso, &idade); //o certo é "%f %d"
     scanf ("%d", &Matricula); //o certo é &matricula
     printf ("%d", &cod); //o certo é cod

     return 0;
 }
