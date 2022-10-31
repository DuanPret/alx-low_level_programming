#include "main.h"

/**
 * _strchr - locates a character in given string
 * @s: input string
 * @c: target character
 * Return: pointer to target character, return 0 on failure.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (0);
}
