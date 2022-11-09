#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: result on success, on failure return NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = 0, l2 = 0;
	char *alloc_mem;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + l1) != '\0')
		l1++;

	while (*(s2 + l2) != '\0')
		l2++;

	alloc_mem = malloc(1 + (l1 * sizeof(*s1)) + (l2 * sizeof(*s2)));

	if (alloc_mem == NULL)
		return ('\0');

	for (i = 0; i < l1; i++)
		alloc_mem[i] = *(s1 + i);

	for (j = 0; j < l2; j++, i++)
		alloc_mem[i] = *(s2 + j);

	return (alloc_mem);
}
