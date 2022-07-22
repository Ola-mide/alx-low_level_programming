#include "main.h"
#include <string.h>

/**
 * tester - checks the string if it is a palindrome
 *
 * @a: integer
 *
 * @b: integer
 *
 * @c: integer
 *
 * @d: string
 *
 * Return: either 1 or 0
 */

int tester(int a, int b, int c, int e, char *d)
{
	if (a + 1 == e)
	{
		if (d[a] == d[b])
		{
			c++;
		}
		else
		{
			tester(a + 1, b - 1, c, e, d);
		}
	}
	return (c);
}

/**
 * is_palindrome - a function that checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: either 1 or 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	int first = 0;
	int last = len - 1;
	int counter = 0;

	tester(first, last, counter, len, s);
	if (counter == len)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
