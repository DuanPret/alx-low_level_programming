#include "main.h"

/**
 * _abs - computes the absolte value of int
 *
 * @i: input parameter
 * Return: absolute value of input
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
