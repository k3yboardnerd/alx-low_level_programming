#include "main.h"
#include <string.h>
/**
 *puts_half - prints half of a string
 *@str: The string
 *Description: prints half of the string
 *Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index = length / 2;

	if (length % 2 != 0)
	{
		start_index = (length - 1) / 2;
	}

	for (int i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
