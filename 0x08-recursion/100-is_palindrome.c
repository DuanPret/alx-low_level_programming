#include "main.h"
/**
 * str_size - checks string size
 *
 * @r: string
 * @l: integer to count length
 * Return: on success return size, on error return -1
 */
int str_size(char *r, int l)
{
	if (*r == 0)
		return (l - 1);

	return (str_size(r + 1, l + 1));
}

/**
 * palindrome_check - checks if string is a palindrome
 *
 * @r: string
 * @l: length of string
 * Return: 1 on success, -1 on error
 */
int palindrome_check(char *r, int l)
{
	if (*r != *(r + l))
		return (0);
	else if (*r == 0)
		return (1);
	return (palindrome_check(r + 1, l - 2));
}

/**
 * is_palindrome - tells if string is a palindrome
 *
 * @s: input character string
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int l;

	l = str_size(s, 0);
	return (palindrome_check(s, l));
}
