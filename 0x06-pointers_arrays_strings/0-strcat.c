#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: destination of string
 *
 * @src: source of string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
