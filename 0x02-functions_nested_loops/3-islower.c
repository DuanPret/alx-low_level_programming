#include "main.h"

/**
 * islower - checks if given input is lowercase
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
