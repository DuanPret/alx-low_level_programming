#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void (*get_func(char identifier, struct format_struct *fmt_arr))(va_list *);
void print_char(va_list *arg);
void print_int(va_list *arg);
void print_float(va_list *arg);
void print_string(va_list *arg);

/**
 * print_all - Prints any data type
 *
 * @format: Pointer to string of data format types
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *separator = "";

	format_struct_ptr fmt_arr[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	void (*get_func_ptr)(va_list *);
	va_list args;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		get_func_ptr = get_func(format[i], fmt_arr);

		if (get_func_ptr)
		{
			printf("%s", separator);
			get_func_ptr(&args);
			separator = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
 * get_func - Gets function format type
 *
 * @fmt_arr: Format types array
 * @identifier: Format type
 *
 * Return: Pointer to function on success, NULL on failure
 */
void (*get_func(char identifier, struct format_struct *fmt_arr))(va_list *)
{
	int j = 0;

	while (fmt_arr[j].format)
	{
		if (fmt_arr[j].format == identifier)
		{
			return (fmt_arr[j].fmt_print_func);
		}

		j++;
	}

	return (fmt_arr[j].fmt_print_func);
}

/**
 * print_char - Prints a character type
 *
 * @arg: pointer to a character
 */

void print_char(va_list *arg)
{
	printf("%c", va_arg(*arg, int));
}

/**
 * print_int - Print an  integer type
 *
 * @arg: Pointer to integer
 */
void print_int(va_list *arg)
{
	printf("%d", va_arg(*arg, int));
}

/**
 * print_float - Print a float data type
 *
 * @arg: Pointer to float
 */
void print_float(va_list *arg)
{
	printf("%f", va_arg(*arg, double));
}

/**
 * print_string - Prints a string type
 *
 * @arg: Pointer to string
 */

void print_string(va_list *arg)
{
	char *str[2];
	int s;

	str[0] = va_arg(*arg, char *);
	str[1] = "(nil)";
	s = str[0] == NULL;
	printf("%s", str[s]);
}
