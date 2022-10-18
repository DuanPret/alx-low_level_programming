#include <stdio.h>
/* 4 digit combination without repeats */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 7; a++)
	{
		for (b = 0; b < 8; b++)
		{
			for (c = 0; c < 9; c++)
			{
				for (d = c + 1; d < 10; d++)
				{
					if (a != d)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
						if (a + b + c + d < 35)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
