#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Number to print
 *
 * Description: Convert decimal to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int mask = 1;

	mask <<= 63;

	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 1)
			_putchar('0');

		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}

		mask = mask >> 1;
	}
}
