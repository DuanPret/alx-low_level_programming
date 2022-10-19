#include "main.h"
#include <stdio.h>

/**
 * main - check for multiples of 3 and 5
 *
 * Return: ALways 0
 */
int main(void)
{
	int max = 1024, n, sum = 0;

	for (n = 0; n < max; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);	
}
