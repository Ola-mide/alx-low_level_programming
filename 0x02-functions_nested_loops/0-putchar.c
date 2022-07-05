#include "main.h"
#include <string.h>

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char c[10] = "_putchar";
	int length;
	int i;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
