#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Finds the length of the string
 * @s: pointer to the string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary number
 *
 * Return: Converted number, if unable to convert return 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (n);
}
