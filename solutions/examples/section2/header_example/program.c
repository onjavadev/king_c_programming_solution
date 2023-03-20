#include <stdio.h>
#include "maths.h"

int main(void){

   int a = 0;
   int b = 0;

   printf("Введите число a: ");
   scanf("%d", &a);

   printf("Введите число b: ");
   scanf("%d", &b);

   printf("Сумма a и b равна %d\n",        sum(a,b));
   printf("Разница a и b равна %d\n",      sub(a,b));
   printf("Произведение a и b равна %d\n", mul(a,b));
   printf("Частное a и b равна %d\n",      div(a,b));
}
