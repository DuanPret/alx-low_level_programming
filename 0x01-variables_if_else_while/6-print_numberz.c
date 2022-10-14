#include <stdio.h>
/* num of base 10 without using var of type char and only putchar */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
