#include "main.h"
/**
 * factorial - factorial of given input
 *
 * @n: integer input
 * Return: if lower than zero return -1 else return factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
