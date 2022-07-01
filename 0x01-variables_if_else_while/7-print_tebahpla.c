#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet[30] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
