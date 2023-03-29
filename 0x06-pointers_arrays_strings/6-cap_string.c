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

	if (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			i++;
			if (str[i] != '\0')
			{
				str[i] = toupper(str[i]);
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}
