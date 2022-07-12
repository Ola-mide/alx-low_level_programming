#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: string passed to the function
 */

void rev_string(char *s)
{
	char c[400];
	int a;
	int i;

	strcpy(c, s);
	a = strlen(c);
	for (i = a - 1; i >= 0; i--)
	{
		s[a - i - 1] = c[i];
	}
}
