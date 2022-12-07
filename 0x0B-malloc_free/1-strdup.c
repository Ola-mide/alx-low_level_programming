#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to newly allocated space
 * in memory
 *
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = strdup(str);
	if (new_str != NULL)
	{
		return (new_str);
	}
	else
	{
		return (NULL);
	}
}
