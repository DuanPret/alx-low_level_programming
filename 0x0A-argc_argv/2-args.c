#include <stdio.h>
/**
 * main - prints all arguments it recieves
 *
 * @argc: length of @ar4gv
 * @argv: arrays of strings of the programs arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
