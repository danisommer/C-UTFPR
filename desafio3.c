#include <stdio.h>

#define N 100

int main() {
    int limiteInferior = 0, limiteSuperior = N, palpite = N/2, resposta = 1, diferenca, tentativas = 0;

    printf("Pense em um numero entre 0 e %d \n", N);
    printf("O numero pode ser: menor (1), igual (2) ou maior (3) que o palpite\n");

    while (resposta > 0 && resposta <= 3) { 
        printf("O numero que voce pensou eh %d? \n", palpite);
        tentativas += 1;
        scanf("%d", &resposta);

        if (resposta == 2) { 

            printf("O numero eh %d.\n", palpite);
            printf("Numero de tentativas: %d", tentativas);
            break; 
        } else if (resposta == 1) { 

            limiteSuperior = palpite - 1;
            diferenca = palpite - limiteInferior;

            if (diferenca > 10) {
                palpite -= 10;
            }
            else {

                palpite -= diferenca;
            }
        } else if (resposta == 3) { 

            limiteInferior = palpite + 1;
            diferenca = limiteSuperior - palpite;
            if (diferenca > 10) {

                palpite += 10;
            }
            else {

                palpite += diferenca;
            }
        }
    }

    return 0;
}

/*

O seu objetivo e escrever um programa que adivinha um numero no intervalo [0,
N], onde N  ́e uma constante definida por uma macro. O procedimento e o seguinte:
1. O usu ́ario pensa em um numero e o anota em algum lugar (papel, editor de texto, etc.). 45
2. O programa deve dar um palpite sobre qual  ́e o n ́umero.
3. O usuario deve informar ao programa se o numero  ́e menor (1), igual (2), ou maior (3) que o
palpite.1
4. Os passos 2 e 3 devem ser repetidos ate que o programa consiga adivinhar o numero anotado.

O programa deve supor que o usu ́ario n ̃ao mente e nem se engana ao interagir com o pro-
grama. Ao final, o programa deve mostrar quantos palpites precisou fazer para adivinhar o n ́umero,

incluindo o palpite correto (ou seja, o n ́umero de palpites n ̃ao pode ser menor que 1).
Vocˆe deve buscar uma solu ̧c ̃ao que minimiza o n ́umero de palpites dados pelo programa - a
sua nota depende disso! Por exemplo, uma solu ̧c ̃ao poss ́ıvel (mas que n ̃ao  ́e o que se espera como

resposta)  ́e fazer um programa que “chuta” valores aleatoriamente at ́e eventualmente acertar! Ob-
serve que a quantidade m ́axima de palpites neste caso  ́e indeterminada. Por outro lado, para um

programa que chuta valores subsequentes entre 1 e N  ́e poss ́ıvel estimar a quantidade m ́axima de
palpites. Entretanto, esta tamb ́em  ́e uma solu ̧c ̃ao naive demais. O desafio aqui  ́e vocˆe pensar em
uma solu ̧c ̃ao que realize os “chutes” de forma mais efetiva. Mas lembre-se que  ́e essencial ter uma
solu ̧c ̃ao que funciona, portanto se vocˆe conseguir chegar a uma solu ̧c ̃ao que  ́e correta mas pouco
eficiente, e n ̃ao conseguir implementar outra ideia melhor, entregue a sua solu ̧c ̃ao, e mantenha as
ideias que n ̃ao funcionarem comentadas no seu c ́odigo. Sua nota sofrer ́a descontos, mas n ̃ao tanto
quanto se vocˆe entregar um programa que n ̃ao funciona!
*/