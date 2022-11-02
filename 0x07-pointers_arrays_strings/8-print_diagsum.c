#include <stdio.h>
#include "main.h"
/**
 * print_diagsum - prints the sum of two diagonals
 * @a: pointer to array
 * @size: Size of matrix
 * Return: nothing.
 */
void print_diagsum(int *a, int size)
{
	int i, c = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i];
		d += a[size - i - 1];
		a += size;
	}

	printf("%d", c);
	printf("%d\n", d);
}
