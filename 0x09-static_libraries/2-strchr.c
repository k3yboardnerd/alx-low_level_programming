#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates the character in a string
 * @s: the string
 * @c: the character
 * Description: locates the character in a string
 * Return: pointer of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
