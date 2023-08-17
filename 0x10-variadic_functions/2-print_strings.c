#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints all strings provided
 * @separator: the string to be printed between the strings
 * @n: number of args
 * @...: strings to be printed
 * Description: prints all strings params
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string;

	va_start(args, n);

	while (i < n)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s",string);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

		i++;
	}

	va_end(args);

	printf("\n");
}
