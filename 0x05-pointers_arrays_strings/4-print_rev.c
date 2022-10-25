#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * @s: string to print
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i, r;

	for (i = 0; s[i] != '\0'; i++)
		r = i;

	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}

	_putchar('\n');
}
