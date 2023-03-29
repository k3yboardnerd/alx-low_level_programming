#include <stdio.h>
/**
 *print_array - Printd elements of arrays
 *@a: array of integers
 *@n: number of elements to print
 *Description: prints array elements
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
