#include "main.h"
#include <ctype.h>

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: character type
 *
 * Return: returns 0 on fail and 1 on success
 */

int _isalpha(int c)
{
	int a = isalpha(c);

	if (a > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
