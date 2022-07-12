#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
