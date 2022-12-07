#include "main.h"
#include <string.h>
/**
 * print_alphabet - function to lowercase alphabets
 */

void print_alphabet(void)
{
	char c[27] = "abcdefghijklmnopqrstuvwxyz";
	int length;
	int i;

	length = strlen(c);
	for (i = 0; i < length; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
