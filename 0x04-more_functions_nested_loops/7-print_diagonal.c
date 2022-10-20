#include "main.h"

/**
 * print_diagonal - prints a diagonal / followed by new line
 *
 * @n: number of spaces to print before /
 * Return: void
 */
void print_diagonal(int n)
{
	int p, q;

	for (p = 0; p <= n; p++)
	{
		for (q = 0; q <= n; q++)
		{
			if (q == p && n > 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
		}
	}
		_putchar('\n');
}
