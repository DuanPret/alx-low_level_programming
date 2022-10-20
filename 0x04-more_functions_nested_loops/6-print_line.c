#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: number of lines to print
 * Return: void
 */
void print_line(int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
