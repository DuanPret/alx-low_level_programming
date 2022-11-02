#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: pointer to array
 * @size: Size of matrix
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i];
		d += a[size - i - 1];
		a += size;
	}
	printf("%d", c);
	printf("%d\n", d);
}
