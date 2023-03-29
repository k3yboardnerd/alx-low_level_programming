#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses the string
 * @s: The string
 * Description: The function reverses the string
 * Return: void
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i = 0;

	while (i < (length - 1))
	{
		char temp = s[i];

		s[i] = s[length - 1];
		s[length - 1] = temp;
		i++;
		length--;
	}
}
