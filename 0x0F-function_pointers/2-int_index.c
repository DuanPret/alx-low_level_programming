#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: String to search
 * @size: Size of @array
 * @cmp: pointer to function to compare
 *
 * Return: Integers in @array that match conditions of @cmp on success,
 * return -1 if size <= 0 or integer that match condition of @cmp
 * were not found, return NULL if @array or @cmp are = to NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
