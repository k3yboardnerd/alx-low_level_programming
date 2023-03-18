#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This is a negative positive code - short description
 * Description: This code assigns n with a random number and then check
 * and print whether the number is positive or negative or zero.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
