#include "main.h"
#include <ctype.h>
/**
 * _islower - function that checks for a lowercase character
 *
 * @c: char type letter
 *
 * Return: return 0 on fail and 1 on success
 */

int _islower(int c)
{
	int a = islower(c);

	if (a > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
