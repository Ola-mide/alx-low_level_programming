#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 *
 * @argc: count of arguments
 *
 * @argv: pointer to string arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int product;
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%d\n", product);
	}
	else if (argc != 3)
	{
		printf("Error\n");
	}
	return (0);
}
