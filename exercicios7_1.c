#include <stdio.h>

int main (){

    int num, fat = 1;
    scanf ("%d", &num);

   while (num>1){

        fat = fat * num;
        num--;

   }
   printf("%d\n", fat);

    return 0;
}
/*

5.(5-1).(5-2).(5-3).(5-4)

*/
