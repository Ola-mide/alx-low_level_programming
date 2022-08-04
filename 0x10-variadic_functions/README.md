# DESCRIPTION

Variadic functions are functions associated with the header file stdarg.h which allows functions to accept an indefinite amount of arguments.

Types - va_list - for iterating arguments

Macros - va_start, va_arg, va_end

va_start - start iterating arguments with a va_list

va_arg - retrieves an argument

va_end - Free a va_list

## FORMAT

```c
#include <stdio.h>
#include <stdarg.h>

/**
  * print all args one at a time until a negative argument is seen
  * all args are assumed to be of int type
  */

void printargs(int arg1, ...)
{
  va_list ap;
  int i;

  va_start(ap, arg1); 
  for (i = arg1; i >= 0; i = va_arg(ap, int))
    printf("%d ", i);
  va_end(ap);
  putchar('\n');
}

int main(void)
{
   printargs(5, 2, 14, 84, 97, 15, -1, 48, -1);
   printargs(84, 51, -1, 3);
   printargs(-1);
   printargs(1, -1);
   return 0;
}
```
