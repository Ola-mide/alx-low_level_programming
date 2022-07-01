#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
