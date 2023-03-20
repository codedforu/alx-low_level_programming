#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * description: get a random number and print number.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
		printf("%1 is positive\n", n);
	else if (n < 0)
		printf("%1 is negative\n", n);
	else
		printf("%1 is zero\n", n);
	return (0);
}
