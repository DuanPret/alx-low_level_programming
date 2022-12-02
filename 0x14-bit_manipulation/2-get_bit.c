#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: Number
 * @index: Position to read
 *
 * Return: Value of the bit at index on success, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bt;

	if (index > 64)
		return (-1);

	bt = n >> index;

	return (bt & 0x1);
}
