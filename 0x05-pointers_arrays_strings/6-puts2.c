#include "main.h"
#include <string.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character followed by a new line
 *
 * @str: string paseed to function
 */

void puts2(char *str)
{
	int a;
	int b;

	a = strlen(str);
	for (b = 0; b < a; b = b + 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
