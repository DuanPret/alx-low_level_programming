#include <stdio.h>
/* 2 two digit combinations */

/**
 * main - Entry point
 *
 * Return: Always 0  (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a + b < 17)
				{
					putchar(' ');
				}
			}
		}
	}
	for (c = 0; c < 9; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (c != d)
			{
				putchar(c + '0');
				putchar(d + '0');
				if (c + d < 17);
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
