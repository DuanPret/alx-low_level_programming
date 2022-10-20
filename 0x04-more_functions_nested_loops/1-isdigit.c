#include "main.h"

/**
 * _isdigit - checks if input is of type digit
 *
 * @c: input that is checked
 * Return: 1 if digit, 0 if otherwize
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
