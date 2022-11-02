#include "main.h"
/**
 * _sqrt_recursion - finds natural square root of a positive
 * number
 *
 * @n: input integer
 * Return: return natural square root of @n, return -1
 * on error.
 */

int sqrt_check(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqrt_check(i + 1, j));
}


int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}
