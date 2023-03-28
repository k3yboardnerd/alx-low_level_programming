#include "main.h"
/**
 * swap_int - This function swaps values of two integers
 * @a: first integer
 * @b: second integer
 * Dscription: This function swaps value of integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
