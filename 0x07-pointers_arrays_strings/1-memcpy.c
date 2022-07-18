#include "main.h"
#include <string.h>

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: destination of string
 *
 * @src: source of string
 *
 * @n: number of bytes to be copied from memory area src to dest
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
