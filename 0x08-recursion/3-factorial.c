#include "main.h"
/**
 * factorial - This returns the factorial of a number
 * @n: number to be factorized
 * Description: return factorial of a number
 * Return: n facto
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
