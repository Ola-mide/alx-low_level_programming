#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - a function that returns the sum of two integers
 *
 * @a: int
 * @b: int
 * Return: int
 */

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - a function that returns the difference of two integers
 *
 * @a: int
 * @b: int
 * Return: int
 */

int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

/**
 * op_mul - a function that returns the product of two integers
 *
 * @a: int
 * @b: int
 * Return: int
 */

int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
 * op_div - a function that returns the result of the division of a and b
 *
 * @a: int
 * @b: int
 * Return: int
 */

int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
 * op_mod - a function that returns the remainder of the division of a and b
 *
 * @a: int
 * @b: int
 * Return: int
 */

int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
