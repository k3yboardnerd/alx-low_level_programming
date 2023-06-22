#include "main.h"
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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}

	concat_str = (char *) malloc(s1_len + n + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	while (i < s1_len)
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		concat_str[i++] = s2[j];
		j++;
	}

	concat_str[i] = '\0';
	return (concat_str);
}
