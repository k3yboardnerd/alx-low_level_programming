#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - Prints the lst digit of the number
 *@n: the number that will be used to print the last digit
 *Description: this function prints the last digit of a number
 *Return: 0
 */
int print_last_digit(int n)
{
	int last_digit = abs(n) % 10;
	return (last_digit);
}
