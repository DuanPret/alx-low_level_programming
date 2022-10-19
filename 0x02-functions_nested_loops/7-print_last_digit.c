#include "main.h"

/**
 * print_last_digit - prints the last digit of a given input
 *
 * @n: input parameter
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int x;

	v = n % 10;
	if (v < 0)
		v = v * (-1);

	_putchar(v + '0');
	return (v);
}
