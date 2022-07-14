#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: array of integers
 *
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int b[999];
	int i, j;

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	for (j = n - 1; j >= 0; j--)
	{
		a[n - j - 1] = b[j];
	}
}
