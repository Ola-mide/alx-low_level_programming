#include "main.h"

/**
 * print_triangle - function that prints a triangle with a specific size
 * @size: height of the triangle
 */

void print_triangle(int size)
{
	int a, b, c;

	for (a = 0; a < size; a++)
	{
		for (b = size - 1 - a; b > 0; b--)
		{
			_putchar(' ');
		}
		for (c = 0; c <= a; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
