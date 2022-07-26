#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * of integers
 *
 * @width: int
 *
 * @height: int
 *
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		array[a] = (int *)malloc(width * sizeof(int));
		if (array[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(array[b]);
			}
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
