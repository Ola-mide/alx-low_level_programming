#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string to be checked
 *
 * @c: character to be found
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	char *a = strchr(s, c);

	return (a);
}
