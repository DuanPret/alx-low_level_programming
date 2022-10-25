#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s: string to reverse
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i, r;
	char *b, *e, ch;


	for (i = 0; s[i] != '\0'; i++)
		r = i;

	b = s;
	e = s;

	for (i = 0; i < r; i++)
		e++;

	for (i = 0; i < r / 2; i++)
	{
		ch = *e;

		*e = *b;
		*b = ch;

		b++;
		e--;
	}
}
