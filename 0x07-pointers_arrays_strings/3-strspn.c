#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of the substring
 * @s: string
 * @accept: string bytes
 * Description: gets the length of the substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i; s[i] != '\0'; i++)
	{
		for (j; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (i);
}
