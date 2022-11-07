#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 *
 * @argc: length of @argv
 * @argv: arrayy of strings of the programs arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
