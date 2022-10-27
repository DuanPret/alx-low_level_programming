#include "main.h"
/**
 * print_number - prints out an integer
 * @n: integer input
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}

	if (n1 / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n1 % 10) + '0');
}
