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
	int forward = 0;
	int backward = strlen(s) - 1;

	while (forward < backward)
	{
		if (s[forward] != s[backward])
		{
			return (0);
		}
		forward++;
		backward--;
	}
	return (1);
}
