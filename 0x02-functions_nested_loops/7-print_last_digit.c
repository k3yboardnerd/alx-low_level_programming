#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_last_digit - Prints the lst digit of the number
 *@n: the number that will be used to print the last digit
 *Description: this function prints the last digit of a number
 *Return: last digit n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n % 10);
}
