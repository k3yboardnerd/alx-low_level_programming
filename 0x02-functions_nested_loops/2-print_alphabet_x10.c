#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *Description: "Prints the alphabets 10 times"
 *Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;
		_putchar('\n');
	}
}
