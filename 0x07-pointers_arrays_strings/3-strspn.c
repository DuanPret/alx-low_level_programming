#include "main.h" 
/**
 * _strspn - length of prefix substring
 * @s: segment to return from
 * @accept: bytes to include
 *
 * Return: number of bytes of s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
