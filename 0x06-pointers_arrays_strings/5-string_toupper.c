#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - change the string to upper case
 * @str: string to be uppercased
 * Description: Changes th string to upper case
 * Return: char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}

	return (str);
}
