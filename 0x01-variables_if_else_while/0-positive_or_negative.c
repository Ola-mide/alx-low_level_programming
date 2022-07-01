#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - to print either positive or negative
 *
 * Return: Always 0
 */

int main(void)
{
	/*Declarations*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
