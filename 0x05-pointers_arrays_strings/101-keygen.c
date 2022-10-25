#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: always 0.
 */
int main(void)
{
	int c = 0, r = 0;

	time_t t;

	srand((unsigned int) time(&t));

	while (c < 2772)
	{
		r = rand() % 128;

		if ((c + r) > 2772)
		break;

		c = c + r;
		putchar(r);
	}
	printf("%c\n", (2772 - c));

	return (0);
}
