#include "main.h"
#include <stdio.h>
/**
 * _puts - This function prints the string
 * @str: THe string
 * Description: This function prints the string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		fputc(*str, stdout);
		str++;
	}
	fputc('\n', stdout);
}
