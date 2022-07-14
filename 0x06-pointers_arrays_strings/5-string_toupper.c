#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - a function that changes lowercase letters of a string
 * to uppercase
 *
 * @s: string to be converted
 *
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i;
	int j;

	i = strlen(s);
	for (j = 0; j < i; j++)
	{
		s[j] = toupper(s[j]);
	}
	return (s);
}
