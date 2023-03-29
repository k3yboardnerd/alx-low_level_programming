#include "main.h"
/**
 * *_strcpy - copies a pointed string by src
 * @dest: destination
 * @src: The strimg to be copied
 * Description: copies a string
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
