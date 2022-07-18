#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: string to be worked with
 *
 * @accept: comparison string
 *
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = strspn(s, accept);

	return (a);
}
