#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Print if the last digit of the number is less/more than 5 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* calculate last digit */
	d = n % 10;
		if (d > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, d);
		}
		else if (d == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, d);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
		}
	return (0);
}
