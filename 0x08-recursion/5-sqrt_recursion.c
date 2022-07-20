#include "main.h"

/**
 * test - check for the actual square root
 *
 * @x: integer
 *
 * @y: integer
 *
 * Return: integer/root
 */

int test(int x, int y)
{
	if (x * x > y)
	{
		return (-1);
	}
	else if (x * x == y)
	{
		return (x);
	}
	else
	{
		return (test((x + 1), y));
	}
}
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 *
 * @n: integer
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (test(1, n));
}

