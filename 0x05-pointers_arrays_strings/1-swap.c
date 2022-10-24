#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps 2 integers
 *
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
