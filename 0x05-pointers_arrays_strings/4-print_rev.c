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

	while ((length - 1) >= 0)
	{
		fwrite(&s[length], sizeof(char), 1, stdout);
		length--;
	}
	fwrite("\n", sizeof(char), 1, stdout);
}
