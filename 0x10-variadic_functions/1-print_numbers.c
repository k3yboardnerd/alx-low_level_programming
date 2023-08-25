#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints all the numbers of params
 * @separator: the string to be printed between nums
 * @n: number of int to be passed (params)
 * Description: prints all numbers of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}

	va_end(args);

	printf("\n");
}