#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of args passed to func
 * @...: list of args
 * Description: function that prints anything
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int itr = 0;
	char *str;
	int i;
	double d;
	char c;

	va_start(args, format);

	while (format && format[itr])
	{
		if (format[itr] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}

		else if (format[itr] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}

		else if (format[itr] == 'f')
		{
			d = va_arg(args, double);
			printf("%f", d);
		}

		else if (format[itr] == 's')
		{
			str = va_arg(args, char *);

			if (str == NULL)
			{
				str = "(nil)";
			}
		}

		if (format[i + 1] != '\0' &&
		    (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's'))
		{
			printf(", ");
		}

		itr++;
	}

	va_end(args);
	printf("\n");
}
