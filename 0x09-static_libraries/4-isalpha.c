#include "main.h"

/**
 *_isalpha - prints if the character is alphabetic
 *@c: Takes the parameter to be printed
 *Description: This function checks whether the parameter is alphabetic
 *Return: 1 (letter, lowercase, uppercase) 0 (otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
