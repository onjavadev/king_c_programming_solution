### Секция 2.2

Рассмотрите следующую программу:

```c	
#include <stdio.h>

int main(void)
{
   printf("Parkinson's Law:\nWork expands so as to ");
   printf("fill the time\n");
   printf("available for its completion.\n");
   return 0;
}
```

(a) Идентифицируйте директивы и инструкции в программе.
(b) Какой будет вывод у программы?

### Решение

(a)

```c 
// директивы препроцессора   
#include <stdio.h> 

int main(void)
{ 
   // инструкции 
   printf("Parkinson's Law:\nWork expands so as to "); 
   printf("fill the time\n");
   printf("available for its completion.\n");
   return 0;
}
```

(b) 

```shell
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```
