#include "main.h"

/**
 * prime_check - checks number to see if it is a prime number
 *
 * @f: factor check
 * @p: possible prime number
 * Return: 1 if prime, else 0
 */
int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}

/**
 * is_prime_number - determines if number is prime
 * number or not
 *
 * @n: input integer
 * Return: 1 if prime, 0 if other.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
