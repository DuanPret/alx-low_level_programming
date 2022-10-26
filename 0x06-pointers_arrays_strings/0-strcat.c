#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * Return: value of dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (n = 0; n < i && src[n] != '\0'; n++)
		dest[i + i] = src[n];
	dest[i + i] = '\0';

	return (dest);
}
