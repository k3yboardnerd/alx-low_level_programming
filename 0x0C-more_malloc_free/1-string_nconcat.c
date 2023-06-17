#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - This func concatenate 2 strings
 * @s1: string 1 to be concated
 * @s2: string 2 to be concated
 * @n: number of bytes s2
 * Description: Concatenate 2 strings
 * Returns: a concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_length;
	size_t s2_length;
	char *final_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (*s1 == '\0')
	{
		return (strdup(s2));
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (n >= s2_length)
	{
		n = s2_length;
	}

	final_str = malloc((s1_length + n + 1) * sizeof(char));
	if (final_str == NULL)
	{
		return (NULL);
	}

	strcpy(final_str, s1);
	strcpy(final_str, s2, n);
	final_str[s1_length + n] = '\0';

	return (final_str);
}
