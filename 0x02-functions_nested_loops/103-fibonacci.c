#include "main.h"
#include <stdio.h>

/**
 * main - even numbers in the fibonacci table
 *
 * Return: Always 0
 */
int main(void)
{
	long int n, a = 1, b = 2, c, d;

	for (n = 0; n < 49; n++)
	{
		if ((b % 2 == 0) && (b <= 4000000))
		{
			d = d + b;
		}
		c = a + b;
		b = c;
	}
	printf("%ld\n", d);
	return (0);
}
