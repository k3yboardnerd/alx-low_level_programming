#include "main.h"

/**
 *print_sign - Prints a signof the number
 *@n: takes the number to be checked
 *Description: This program checks whether a certain number is +/-
 *Return: 1(+) 0(0) -1(-)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
