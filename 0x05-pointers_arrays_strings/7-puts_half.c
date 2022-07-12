#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints half of a string followed by a new line
 *
 * @str: string passed to the function
 */

void puts_half(char *str)
{
	int len;
	int a;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (a = len / 2; a < len; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
	}
	else
	{
		for (a = (len - 1) / 2; a < len; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
	}
}
