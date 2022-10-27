#include "main.h"
/**
 * rot13 - cipher that replaces letters with another 13 letters after
 * @s - string input
 * Return: s
 */
char *rot13(char *s)
{
	int i,r;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (r = 0; r < 52; r++)
		{
			if (s[i] == alp[r])
			{
				s[i] = rot[r];
				break;
			}
		}
	}
	return (s);
}
