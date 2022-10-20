#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: character that is checked
 * Return: 1 if uppercase, 0 if otherwize
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
