#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates the substring
 * @haystack: pointer to the string search
 * @needle: pointer to the substring
 * Description: locates the string
 * Return: pointer of substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *pointer1;
	char *pointer2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		pointer1 = haystack;
		pointer2 = needle;

		while (*pointer1 == *pointer2 && *pointer2 != '\0')
		{
			pointer1++;
			pointer2++;
		}

		if (*pointer2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
