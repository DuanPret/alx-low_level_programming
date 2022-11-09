#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 *
 * @size: size of array
 * @c: character value for the array
 * Return: NULL on fail, return the pointer on success
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return ('\0');

	a = malloc(size);

	if (a == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		a[i] = c;

	a[size] = '\0';

	return (a);
}
