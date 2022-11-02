#include "main.h"
/**
 * is_prime_number - determines if number is prime
 * number or not
 *
 * @n: input integer
 * Return: 1 if prime, 0 if other.
 */
int is_prime_number(int n)
{
	if (n % 2 != 0)
		return (0);
	else
		return (1);
}
