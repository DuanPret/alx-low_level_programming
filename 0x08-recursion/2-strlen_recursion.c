#include "main.h"
/**
 * _strlen_recursion - finds the length of the string
 *
 * @s: input string
 * Return: length of string in bytes
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
