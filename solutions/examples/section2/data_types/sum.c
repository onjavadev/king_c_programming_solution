#include <stdio.h>

long long sum(int a, int b)
{
   // не забываем привести тип к long long во время вычисления
   return (long long)a + b;
}


int main(void)
{
   int       a = 0,
             b = 0;
   // результат вычисления хранится в большем типе данных чтобы избежать переполнения
   long long x = 0;

   printf("Input a number: ");
   scanf("%d", &a);

   printf("Input b number: ");
   scanf("%d", &b);

   x = sum(a, b);

   printf("RESULT of a + b: %lld\n", x);

   return 0;
}
