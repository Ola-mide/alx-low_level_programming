#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: string to be searched in
 *
 * @accept: number of bytes to be matched
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *a = strpbrk(s, accept);

	return (a);
}
