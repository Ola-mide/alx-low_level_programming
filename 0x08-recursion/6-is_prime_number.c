#include "main.h"

/**
 * checker - confirms the prime number
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: either 1 or 0
 */

int checker(int a, int b)
{
	if ((b / a == 1) && (b % a == 0))
	{
		return (1);
	}
	else if (b % a == 0)
	{
		return (0);
	}
	else
	{
		return (checker(a + 1, b));
	}
}

/**
 * is_prime_number - checks for a prime number
 *
 * @n: integer
 *
 * Return: either 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checker(2, n));
}
