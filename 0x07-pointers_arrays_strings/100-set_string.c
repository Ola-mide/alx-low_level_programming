#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 *
 * @s: pointer to be set
 *
 * @to: value set to pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
