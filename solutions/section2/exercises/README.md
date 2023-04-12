### Секция 2.3

Сожмите программу dweight.c 
(1) заменяя присвоения для height, length и width с помощью инициализаторов
(2) удалите переменную weight, вместо это вычисляя (volume + 165) / 166 в последнем printf.

### Решение

```c
/* Computes the dimensional weight of 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
   int height = 8, length = 12, width = 10, volume = 0;

   volume = height * length * width;

   printf("Dimensions: %dx%dx%d\n", length, width, height);
   printf("Volume (cubic inches): %d\n", volume);
   printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

   return 0;
}
```
