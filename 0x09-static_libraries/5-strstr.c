#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: string to be checked
 *
 * @needle: substring to be found
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = strstr(haystack, needle);

	return (a);
}
