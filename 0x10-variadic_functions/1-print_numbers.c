#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 *
 * @separator: pointer to string to print
 * @n: number of integers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list par;

	va_start(par, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(par, int));
		else
			printf("%d%s", va_arg(par, int), separator);
	}

	if (n)
		printf("%d\n", va_arg(par, int));
	else
		printf("\n");

	va_end(par);

}
