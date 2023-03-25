#include "main.h"

/**
 *isupper - checks if the parameter char is upper or not
 *@c: char c
 *Description: This function cheks if the given parameter is upper or lower cased
 *Return: 1 (upper) 0(otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
