#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 *
 * @b: pointer to binary string
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a, i;
	int base = 1;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
	}
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			num += 1 * base;
		}
		base = base * 2;
	}
	return (num);
}
