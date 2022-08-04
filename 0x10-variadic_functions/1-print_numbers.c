#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers followed by a new line
 *
 * @separator: a pointer to the string to separate arguments when printing
 *
 * @n: count of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, unsigned int));
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, unsigned int));
		}
	}
	printf("\n");
	va_end(ap);
}
