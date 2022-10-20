#include "main.h"

/**
 * more_numbers - counts up to a point
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, m;

	m = 0;
	while (m < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
		m++;
	}
}
