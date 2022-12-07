#include <stdio.h>

/**
 * main - prints lower and uppercase alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char num[11] = "0123456789";
	char alpha[7] = "abcdef";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
