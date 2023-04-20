#include <stdio.h>

int testaTipoChar (char c){

    if (c>=0x41 && c<= 0x5A){

        if(c==0x41||c==0x45||c==0x49||c==0x4F||c==0x55){

            return 1;

        } else {

            return 3;

        }


    } else if(c>=0x61 && c<= 0x7A) {

        if(c==0x61||c==0x65||c==0x69||c==0x6F||c==0x75){

            return 2;

        } else {

            return 4;

        }

    } else if (c>=0x30 && c<= 0x39){

        return 5;

    } else {

        return 0;

    }

}

int main (){

    printf("%d", testaTipoChar(0x33));

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