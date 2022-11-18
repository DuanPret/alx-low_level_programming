#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings
 *
 * @separator: Pointer to string to be printed between the strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(par);
	char *str;

	va_start(par, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		str = va_arg(par, char *);

		if (!separator)
			printf("%s", str ? str : "(nil)");
		else
			printf("%s%s", str ? str : "(nil)", separator);
	}

	if (n)
	{
		str = va_arg(par, char *);
		printf("%s\n", str ? str : "(nil)");
	}
	else
		printf("\n");

	va_end(par);
}
