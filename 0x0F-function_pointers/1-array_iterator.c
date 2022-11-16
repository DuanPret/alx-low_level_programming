#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function as a parameter
 * on each element of an array
 *
 * @array: An array of paramters to pass to @action
 * @size: Size of @array
 * @action: Pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
