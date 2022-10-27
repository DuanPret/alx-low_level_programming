#include "main.h"
/**
 * cap_string - capitalizes all words in given string
 *
 * @s: string input
 * Return: s.
 */
char *cap_string(char *s)
{
	int i, d;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;

		for (d = 0; delimeters[d] != '\0'; d++)
			if (s[i] == delimeters[d] && s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
