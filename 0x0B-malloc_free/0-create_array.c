#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array
 *
 * @size: size of array
 *
 * @c: elemant of array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	a = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	if (a != NULL)
	{
		for (x = 0; x < size; x++)
		{
			a[x] = c;
		}
		return (a);
	}
	else
	{
		return (NULL);
	}
}
