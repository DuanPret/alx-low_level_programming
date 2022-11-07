#include <stdio.h>
/**
 * main - prints its name
 *
 * @argc: length of argv
 * @argv: arrays of strings of program's arguments
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	
	return (0);
}
