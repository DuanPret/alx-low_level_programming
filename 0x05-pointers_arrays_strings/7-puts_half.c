#include "main.h"
/**
 * puts_half - prints half of the given text
 * @str: input string
 * Return: nothing.
 */
void puts_half(char *str)
{
	int i, hf;

	i = 0;
	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}

	if (i % 2 == 1)
		hf = i / 2;
	else
		hf = (i - 1) / 2;

	for (hf++; hf < i; hf++)
		_putchar(str[hf]);
	_putchar('\n');
}
