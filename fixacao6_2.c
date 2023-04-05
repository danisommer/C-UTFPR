#include <stdio.h>
#define N 10
#define X 3

int main (){
    int i;
    for (i = 0; i < N*X; i += X)
    printf ("%d\n", i);
    return 0;
}

/*
0
3
6
9
12
15
18
21
24
27
*/