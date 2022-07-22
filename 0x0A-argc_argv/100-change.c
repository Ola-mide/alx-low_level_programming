#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change
 *
 * @argc: count of arguments
 *
 * @argv: pointer to string arguments
 *
 * Return: 0(success) or 1(failure)
 */

int main(int argc, char *argv[])
{
	int change = 0;
	int i, a, b;
	int array[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5 && a; i++)
		{
			b = a / array[i];
			change += b;
			a -= b * array[i];
		}
		printf("%d\n", change);
	}
	return (0);
}
