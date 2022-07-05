#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @a: number to be worked on
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		b *= -1;
	}
	_putchar('0' + b);
	return (b);
}
