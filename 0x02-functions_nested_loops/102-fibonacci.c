#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	int n, a = 1, b = 2, c;

	for (n = 0; n < 49; n++)
	{
		printf("%d, ", n);
		c = a + b;
		a = b;
		b = c;
		if (n == 48)
		{
			printf("%d\n", a);
		}
	}
	return (0);
}
