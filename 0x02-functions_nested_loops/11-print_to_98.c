#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from given input to 98
 *	in order with comma's and spaces between
 *
 * @n: start of counter
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

}
