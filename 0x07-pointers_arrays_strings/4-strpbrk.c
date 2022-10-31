#include "main.h"
/**
 * _strpbrk - locates the first occurrence in string
 *
 * @s: string input
 * @accept: bytes to compare
 * Return: pointer to bytes in @s, 0 if no byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
