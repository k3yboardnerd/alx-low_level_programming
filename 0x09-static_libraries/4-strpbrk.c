#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches for any set of bytes in string
 * @s: string
 * @accept: bytes/string
 * Description: searches for any set of bytes in string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *pointer;

	while (*s != '\0')
	{
		for (pointer = accept; *pointer != '\0'; pointer++)
		{
			if (*s == *pointer)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
