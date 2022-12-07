#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string
 *
 * @dest: destination of string
 *
 * @src: source of string
 *
 * @n: number of bytes
 *
 * Return: copies string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
