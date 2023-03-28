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
	int length = strlen(s);

	int i = length - 1;

	while (i >= 0)
	{
		write(STDOUT_FILENO, &s[i], i);
		i--;
	}
	write(STDOUT_FILENO, "\n", 1);
}
