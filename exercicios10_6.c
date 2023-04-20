#include <stdio.h>

int testaTipoChar (char c){

    if (c>='A' && c<= 'Z'){

        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){

            return 1;

        } else {

            return 3;

        }


    } else if(c>='a' && c<= 'z') {

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){

            return 2;

        } else {

            return 4;

        }

    } else if (c>='0' && c<= '9'){

        return 5;

    } else {

        return 0;

    }

}

int main (){

    printf("%d", testaTipoChar('#'));

    return 0;
}

/*

Escreva uma função que recebe um caractere e retorna 1 se o caractere for uma vogal
maiúscula, 2 se for uma vogal minúscula, 3 se for uma consoante maiúscula, 4 se for uma consoante
minúscula, 5 se for um dígito, e 0 do contrário. O protótipo da função deve ser:
int testaTipoChar (char c);
Dica: observe atentamente como é a tabela ASCII. Você não precisa usar NENHUM valor dela, mas
entender a forma como os caracteres estão dispostos pode ajudar.
*/