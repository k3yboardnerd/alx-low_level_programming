#include "main.h"
/**
 * _strlen - This function prints out the string len
 * @s: The string
 * Description: This prints out the str len
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
