#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * print_rev - This function prints the string in a reverse order
 * @s: The string
 * Description: Prints the string in a reverse order
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int o;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	for (o = length; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
