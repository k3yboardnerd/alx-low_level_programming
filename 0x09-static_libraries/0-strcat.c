#include "main.h"
/**
 * *_strcat - This function concatenates two strings
 * @dest: destination string
 * @src: source string
 * Description: Concatenates two strings
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}
