#include "main.h"
#include <stdio.h>
/**
 * print_rev - This function prints the string in a reverse order
 * @s: The string
 * Description: Prints the string in a reverse order
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	int str_len = length;

	for (int i = str_len - 1; i >= 0; i--)
	{
		fputc(s[i], stdout);
	}
	fputc('\n', stdout);
}
