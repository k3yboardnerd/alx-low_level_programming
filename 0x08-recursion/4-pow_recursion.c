#include "main.h"
/**
 * _pow_recursion - return the power of number x to y
 * @x: number to be raised (base)
 * @y: the exponent
 * Description: returns the power of x to y
 * Return: power of x to y/ -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
