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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;

	for (i; s[i] != '\0'; i++)
	{
		for (j; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
