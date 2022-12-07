#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: character to be checked
 * Return: returns 0 if fail and 1 if success
 */

int _isupper(int c)
{
	int a = isupper(c);

	if (a > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
