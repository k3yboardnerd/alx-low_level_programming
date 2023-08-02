#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if the string is palindrome
 * @s: string to be checked
 * Description: This func prints 1 if str is palindrome else 0
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int strLen = strlen(s);
	int i = 0, j = strLen - 1;

	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j++;
	}

	return (1);
}
