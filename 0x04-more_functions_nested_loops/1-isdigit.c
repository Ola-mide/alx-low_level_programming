#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit
 * @c: number to be checked
 * Return: returns 0 if fail and 1 on success
 */

int _isdigit(int c)
{
	int a = isdigit(c);

	if (a > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
