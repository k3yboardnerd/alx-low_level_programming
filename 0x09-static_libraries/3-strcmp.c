#include "main.h"
/**
 * _strcmp - Compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Description: Compares 2 strings
 * Return: 0/1/-1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] < s2[i])
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
