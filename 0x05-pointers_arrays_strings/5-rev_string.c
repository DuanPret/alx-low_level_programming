#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s: string to reverse
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i, mx, hf;
	char b, e;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	mx = i - 1;
	hf = mx / 2;

	while (hf >= 0)
	{
		b = s[mx - hf];
		e = s[hf];
		s[hf] = b;
		s[mx - hf] = e;
		hf--;
	}
}
