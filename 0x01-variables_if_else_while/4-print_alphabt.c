#include <stdio.h>
/* Prints alphabet in lowercase without q & e */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ( c == 'e' || c == 'q')
		{
			c++;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
