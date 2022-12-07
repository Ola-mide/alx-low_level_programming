#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet[30] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
