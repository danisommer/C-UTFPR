#include <stdio.h>
#define STRING_LENGHT 19

int ehPalindromo (char s[])
{
    for (int i = 0; i < STRING_LENGHT/2; i ++)
    {
        if (s[i]!=s[STRING_LENGHT-i-1])
           return 0;
    }
    return 1;
}

int main ()
{
    char string[STRING_LENGHT] = "danielzakikazleinad";
    printf("%d", ehPalindromo(string));
    return 0;
}
