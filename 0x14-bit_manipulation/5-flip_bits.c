#include "main.h"

/**
 * flip_bits - count the bit to change to another value
 * @n: first integer
 * @m: Integer to compare
 *
 * Return: Number of diffrent bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	n = n ^ m;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}

	return (count);
}
