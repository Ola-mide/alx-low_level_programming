#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: string
 *
 * @s2: string
 *
 * @n: number of bytes
 *
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	char *str;

	if (s1 == NULL)
		a = 0;
	else
		a = strlen(s1);
	if (s2 == NULL)
		b = 0;
	else
		b = strlen(s2);
	if (n >= b)
		c = a + b + 1;
	else
		c = a + n + 1;
	str = malloc(c * sizeof(*str));
	if (str == NULL)
		return (NULL);
	if (n >= b)
	{
		for (d = 0; d < a; d++)
			str[d] = s1[d];
		for (d = 0; d < b; d++)
			str[d + a] = s2[d];
		str[a + b] = '\0';
	}
	else
	{
		for (d = 0; d < a; d++)
			str[d] = s1[d];
		for (d = 0; d < n; d++)
			str[d + a] = s2[d];
		str[a + n] = '\0';
	}
	return (str);
}
