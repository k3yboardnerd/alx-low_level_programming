#include "main.h"
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: nummber to be squared
 * Description: Returns the square root of a number
 * Return: square root of n / -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	else
	{
		int j = _sqrt_recursion(n / 4) * 2;
		int d = n - j * j;

		if (d == 0)
		{
			return (j);
		}
		else if (d > 0)
		{
			return (_sqrt_recursion((j + 1) * (j + 1) > n ? n : (j + 1) * (j + 1)));
		}
		else
		{
			return (_sqrt_recursion((j - 1) * (j - 1) > n ? n : (j - 1) * (j - 1)));
		}
	}
}
