#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: destination of string
 *
 * @src: source of string
 *
 * @n: number of bytes
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
