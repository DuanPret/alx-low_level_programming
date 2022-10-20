#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int w, n;

	if (size <= 0)
		_putchar('\n');

	for (w = 0; w < size; w++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
