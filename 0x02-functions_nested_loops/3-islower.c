#include "main.h"

/**
 * _islower - checks if c input is lowercase
 *
 * @c: input parameter
 *
 * Return: 0 is false, 1 is true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
