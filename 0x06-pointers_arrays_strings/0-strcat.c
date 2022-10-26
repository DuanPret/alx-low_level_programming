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
	int n = 0, i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[i] = '\0';

	return (dest);
}
