#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: integer/number
 *
 * Return: factorial of given integer
 */

int factorial(int n)
{
	int fac = 1;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	fac = n * factorial(n - 1);
	return (fac);
}
