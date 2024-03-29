#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - This func concatenates two strings
 * @s1: string to be concatenated 1
 * @s2: string to be concatenated 2
 * Description: This func concats two strings
 * Return: NULL | pointer contents of s1 and s2 seq..
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len;
	char *concated;

	if (s1 == NULL || *s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == NULL || *s2 == '\0')
	{
		s2 = "";
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		s1 = "";
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concated = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concated == NULL)
	{
		return (NULL);
	}

	strcpy(concated, s1);
	strcat(concated, s2);

	return (concated);
}
