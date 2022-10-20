#include "main.h"
#include <stdio.h>

/**
 * main - counts from one to hundred and every multiple of three prints Fizz
 * and every multiple of 5 prints Buzz, if multiple of both print FizzBuzz
 *
 * Return: Result
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % (3 * 5) == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);

		i++;
	}
	putchar('\n');
	return (0);
}
