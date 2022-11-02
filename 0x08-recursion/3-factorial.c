#include "main.h"
/**
 * factorial - factorial of given input
 *
 * @n: integer input
 * Return: result of @n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
