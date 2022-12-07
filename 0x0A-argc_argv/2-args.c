#include <stdio.h>

/**
 * main - prints all arguments received
 *
 * @argc: count of arguments
 *
 * @argv: pointer to string arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
