#include "main.h"

/**
 *print_numbers - prints numbers (0-9)
 *Description: This function prints numbers from (0-9)
 *Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
}
