#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int a, b, c, d;

	if (s1 == NULL)
		a = 0;
	else
		a = strlen(s1);

	if (s2 == NULL)
		b = 0;
	else
		b = strlen(s2);

	c = a + b;
	str = malloc(c * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (d = 0; d < a; d++)
		{
			str[d] = s1[d];
		}
		for (d = 0; d < b; d++)
		{
			str[d + a] = s2[d];
		}
		str[a + b] = '\0';
		return (str);
	}
}
