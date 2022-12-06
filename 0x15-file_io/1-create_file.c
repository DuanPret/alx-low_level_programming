#include "main.h"

int _strlen(char *s);

/**
 * create_file - Creates a file
 * @filename: File to create
 * @text_content: Info to write into the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t nletters;
	int file;

	if (filename == NULL)
		return (1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		nletters = write (file, text_content, _strlen(text_content));
		if (nletters == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}

/**
 * _strlen - Checks length of file
 * @s: String input
 *
 * Return: Lenght of string
 */

int _strlen (char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}
