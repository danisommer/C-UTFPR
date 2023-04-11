#include <stdio.h>

int main (){

    int anos = 0;
    float altFoo = 1.5, cresceFoo = 0.02, altBar = 1.3, cresceBar = 0.03;

    while (altFoo > altBar){

        altFoo += cresceFoo;
        altBar += cresceBar;
        printf("\n %.2f ", altFoo);
        printf("%.2f", altBar);
        anos++;
        
    }

    printf("\n %d anos", anos);

    return 0;
}





/*2. Foolano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Barano tem 1,10 metro e cresce
3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Barano seja mais alto que Foolano, além da altura que ambos terão neste momento. Para
este programa, faça uma solução “força bruta” - ignore que se tratam de duas progressões aritméticas.
Também ignore o fato de que este exemplo abstrato é absurdo.
Dica: caso não consiga enxergar rapidamente a estrutura do programa, monte uma tabela, colocando
nas colunas os valores relevantes e em cada linha os valores para um ano. Preencha então algumas
linhas, simulado a passagem de alguns anos. Isso pode lhe ajudar a enxergar a estrutura do
programa.*/