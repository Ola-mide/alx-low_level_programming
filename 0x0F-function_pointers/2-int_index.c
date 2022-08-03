#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: a pointer to an array of integers
 *
 * @size: size of array
 *
 * @cmp: pointer to a function that compares values
 *
 * Return: index of first element that passes on success or -1 on fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
