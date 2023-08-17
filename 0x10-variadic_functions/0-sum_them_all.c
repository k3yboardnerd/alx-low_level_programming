#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - summ all of its params
 * @n: number of args to be summed
 * Description: sums all params
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}
