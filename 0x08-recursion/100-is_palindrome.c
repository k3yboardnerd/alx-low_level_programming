#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if the given string is a palindrome or not.
 * @s: string to be verified
 * Description: this method returns 1 if string is palindrome and 0 if not.
 * Return: 1 if palindrome/ 0 if not
 */
int is_palindrome(char *s)
{
	int stringLen = strlen(s);

	if (stringLen <= 1)
	{
		return (1);
	}

	if (s[0] != s[stringLen - 1])
	{
		return (0);
	}

	s[stringLen - 1] = '\0';
	s[stringLen - 1] = s[0];

	return (is_palindrome(s + 1));
}
