#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: int
 *
 * @max: int
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	array = malloc(i * sizeof(*array));
	if (array == NULL)
		return (NULL);
	for (j = 0; j < i; j++, min++)
	{
		array[j] = min;
	}
	return (array);
}
