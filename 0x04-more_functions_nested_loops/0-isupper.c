#include "main.h"

/**
 *_isupper - checks if the parameter char is upper or not
 *@c: char c
 *Description: This function checks if the given parameter is upper or lower
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
