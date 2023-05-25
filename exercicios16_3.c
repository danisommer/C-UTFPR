#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024

void balanceamentoDeParenteses (char* str, int* parenteses) {

    int i, j;
    for (i = 0; str [i] != '\0'; i++) {
        if (str [i] == '(')     
            parenteses [i] = -1;
        else if (str [i] == ')') {
        j = i-1;
    while (j >= 0 && (parenteses [j] != -1 || str [j] != '('))
        j--;
    if (j < 0)
    parenteses [i] = -1;
    else {
    parenteses [i] = j;
    parenteses [j] = i;
    }
    }
else
parenteses [i] = 0;
}
}

