#include "main.h"
/**
 * _strstr - finds first occurrence of the substring needle in string haystack
 *
 * @haystack: string to search
 * @needle: target substring
 * Return: pointer to biginning of located substring, 0 if if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, s = 0;

	while (needle[s] != '\0')
		s++;

	while(*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i == s)
			return (haystack);
		else
			haystack++;
	}
	return (0);
}
