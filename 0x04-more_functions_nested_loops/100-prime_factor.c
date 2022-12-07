#include <stdio.h>

/**
 * main - looking for largest prime number of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 1231952;
	long int b, c, d, e;

	for (b = 2; b < a; b++)
	{
		c = a % b;
		if (c == 0)
		{
			for (d = 0; d <= b; d++)
			{
				if (((b % d) == 0) && ((b / d) == 1))
				{
					e = b;
				}
			}
		}
	}
	printf("%ld", e);
	printf("\n");
	return (0);
}
