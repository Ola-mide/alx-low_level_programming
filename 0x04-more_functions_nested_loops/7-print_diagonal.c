#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line in the termina;
 *
 * @n: length of the terminal
 *
 * Return: the diagonal or a new line if n <= 0
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
