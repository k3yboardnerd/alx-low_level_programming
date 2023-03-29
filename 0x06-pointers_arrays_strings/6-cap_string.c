#include "main.h"
#include <ctype.h>
/**
 * cap_string - CApitalize
 * @str: the strng to be captilized
 * Description: This function captilize the string
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1;

	while (str[i] != '\0')
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
		i++;
	}
	return (str);
}
