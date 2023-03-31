#include <stdio.h>

int main  () {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if  (a > 0){

        printf("+");

    } else{ printf("-");}
    if  (b > 0){

        printf("+");

    } else{ printf("-");}
    if  (c > 0){

        printf("+");

    } else{ printf("-");}


    return 0;
}

/*
+++
++-
+-+
+--
-++
---
--+
-+-
*/
