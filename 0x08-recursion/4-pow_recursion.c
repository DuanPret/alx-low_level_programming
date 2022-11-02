#include "main.h"
/**
 * _pow_recursion - calculates value of @x raised to
 * the power of @y
 *
 * @x: input integer
 * @y: to the power of
 * Return: value of @x raised to power of @y, on error
 * return -1
 */
int _pow_recursion(int x, int y);
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
