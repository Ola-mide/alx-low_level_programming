#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the length of the line
 * Return: returns a straight line or a next line if n < 0
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (!(n <= 0))
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
