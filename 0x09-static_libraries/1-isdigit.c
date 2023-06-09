#include "main.h"

/**
 *_isdigit - checks if the c is num
 *@c: int c
 *Description: Checks whether if c is a number
 *Return: 1 (digit) 0 (otherwise)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
