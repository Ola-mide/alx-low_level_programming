#include <stdio.h>

/**
 * main - print the number of arguments passed
 *
 * @argc: count of arguments
 *
 * @argv: pointer to string arguments
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
