#include "main.h"
/**
 * *_strncpy - This function copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: bytes
 * Description: Copies a string
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
