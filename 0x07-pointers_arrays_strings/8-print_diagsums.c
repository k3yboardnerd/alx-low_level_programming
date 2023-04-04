#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals
 * @a: the square
 * @size: the size of the square
 */
void print_diagsums(int *a, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += *(a + j * size + j);
		sum2 += *(a + j * size + (size - 1 - j));
	}
	printf("%d, %d\n", sum1, sum2);
}
