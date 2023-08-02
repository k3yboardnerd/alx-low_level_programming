#include "main.h"
/**
 * is_prime_number - return 1 if prime or 0 if not
 * @n: number TB varified
 * Description: returns 1 if prime or 0 if not
 * Return: 1/0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		return (1);
	}
	return (1);
}
