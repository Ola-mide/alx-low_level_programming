#include <stdio.h>

/**
 * main - prints lower and uppercase alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char lower[27] = "abcdefghijklmnopqrstuvwxyz";
	char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upper[i]);
	}
	putchar('\n');
	return (0);
}
