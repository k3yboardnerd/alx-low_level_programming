#include "main.h"
#include <string.h>
/**
 *puts2 - Prints all characters
 *@str: The string
 *Description: Prints every character
 *Return: void
 */
void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
