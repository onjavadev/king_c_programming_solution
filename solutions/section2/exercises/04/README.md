### Секция 2.4

Напишите программу, которая объявляет несколько переменных `int` и `float` - без их инициализации - и затем печатает их значения. Есть ли какая-то закономерность в
значениях? (Обычно этого не происходит.)

### Решение

```c
#include <stdio.h>

int main(void)
{
   int cucumber, pomidor;
   float morkov, barashek;

   printf("cucmber: %d\n", cucumber);
   printf("pomidor: %d\n", pomidor);
   printf("morkov: %f\n", morkov);
   printf("barashek: %f\n", barashek);

   return 0;
}
```

Закономерности почти нет, случайные числа

```shell
$ ./solution 
cucmber: 4096
pomidor: 0
morkov: -0.000000
barashek: 0.000000
```
