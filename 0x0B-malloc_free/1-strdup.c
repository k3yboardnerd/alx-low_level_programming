#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - This func return a pointer to a newly allocated mem
 * @str: the string to be a pointer/duplicate
 * Description: This func returns a pointer to a newly allocated mem
 * Return: pointer of str | NULL
 */
char *_strdup(char *str)
{
	int str_length;
	char *str_duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	str_length = strlen(str);
	str_duplicate = malloc((str_length + 1) * sizeof(char));

	if (str_duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(str_duplicate, str);
	return (str_duplicate);
}
