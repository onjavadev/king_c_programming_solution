### Секция 2.1

Создать и запустить знаменитую программу "hello, world" Kernighan и Ritchie:

```c
#include <stdio.h>

int main(void)
{
   printf("hello, world\n");
}
```

Получаете ли вы предупреждающее сообщение от компилятора? Если да, что нужно сделать чтобы оно ушло?

### Решения

При использовании опции -std=c89 мы получаем ошибку 

```
$gcc -O -Wall -W -pedantic -ansi -std=c99 -o solution solution.c

solution.c: In function ‘main’:
solution.c:6:1: warning: control reaches end of non-void function [-Wreturn-type]
    6 | }
      | ^
```

которая говорит о том, что мы завершили функцию которая возвращает int без возвращения значения импользуя ключевое слово return.
Чтобы исправить программу нам нужно вернуть 0 в конце функции main.

```c
#include <stdio.h>

int main(void)
{
   printf("hello, world\n");

   return 0;
}
```


