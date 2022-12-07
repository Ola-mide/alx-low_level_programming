#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: first argument
 *
 * Return: sum of arguments on success, 0 on fail
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
