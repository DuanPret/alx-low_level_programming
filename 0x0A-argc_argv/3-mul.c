#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two given integers toghether
 *
 * @argc: length of @argv
 * @argv: array of strings of program's arguments
 * Retun: 0 on success, on error return 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);	
}
