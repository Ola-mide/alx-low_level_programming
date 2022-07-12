#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line
 *
 * @s: string passed to function
 */

void print_rev(char *s)
{
	int a;
	int i;

	a = strlen(s);
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
