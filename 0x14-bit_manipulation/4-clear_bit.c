#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at given index
 * @n: Pointer to bit
 * @index: Position to set
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
