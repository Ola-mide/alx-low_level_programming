#include "main.h"
#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: string to be worked with
 *
 * @b: constant byte
 *
 * @n: first number of bytes to be filled
 *
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
