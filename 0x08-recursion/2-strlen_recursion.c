#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - prints/returns the length of the string
 * @s: string to be counted
 * Description: returns the strig length
 * Return: int/length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strlen(s + 1));
	}
}
