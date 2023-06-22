#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - This method concatenate 2 strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes to be allocated for the final string
 * Description: This method concatenate 2 strings
 * Return: concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	concat_str = malloc((s1_len + n + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}

	strcpy(concat_str, s1);
	strncat(concat_str, s2, n);
	concat_str[s1_len + n] = '\0';
	return (concat_str);
}
