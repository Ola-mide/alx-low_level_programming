#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - add positive numbers
 *
 * @argc: count of arguments
 *
 * @argv: pointer to string arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, len;

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);
		for (j = 0; j < len; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
