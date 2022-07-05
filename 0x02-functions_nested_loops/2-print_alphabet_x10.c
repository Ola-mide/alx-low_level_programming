#include "main.h"
#include <string.h>
/**
 * print_alphabet - function to lowercase alphabets 10 times
 */

void print_alphabet_x10(void)
{
	char c[27] = "abcdefghijklmnopqrstuvwxyz";
	int length;
	int i;
	int j;

	length = strlen(c);
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < length; i++)
		{
			_putchar(c[i]);
		}
		_putchar('\n');
	}
}
