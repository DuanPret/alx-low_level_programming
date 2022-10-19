#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: input parameter
 *Return: 1 is positive, 0 is zero,
 * -1 is negitive, '/' is not a digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
