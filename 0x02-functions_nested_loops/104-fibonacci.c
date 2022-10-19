#include "main.h"
#include <stdio.h>

/**
 * main - print the first 98 numbers of fibinacci
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n, a, b, a1, a2, b1, b2;

	a = 1;
	b = 2;

	printf("%lu", a);
	for (n = 1; n < 91; n++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}
	a1 = a / 1000000000;
	a2 = a % 1000000000;

	b1 = b / 1000000000;
	b2 = b % 1000000000;
	for (n = 92; n < 99; ++n)
	{
		printf(", %lu", a1 + (a2 / 1000000000));
		printf("%lu", a2 % 1000000000);

		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}
