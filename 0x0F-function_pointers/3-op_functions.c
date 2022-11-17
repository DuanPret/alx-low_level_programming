#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers @a and @b
 *
 * @a: First input integer
 * @b: Second input integer
 *
 * Return: Sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculate the diffrence of @a and @b
 *
 * @a: First input integer
 * @b: Second input integer
 *
 * Return: Diffrence of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 *
 * @a: First input integer
 * @b: Second input integer
 *
 * Return: Product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides @a by @b
 *
 * @a: First input integer
 * @b: Second input integer
 *
 * Return: Results of the division of @a by @b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error, blackhole in progress...\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Calculates the remainder of @a divided by @b
 *
 * @a: First input integer
 * @b: Second input integer
 *
 * Return: Remainder of @ divided by @b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error, blackhole in progress...\n");
		exit(100);
	}

	return (a % b);
}
