#include "main.h"

/**
 *_islower - Entry point
 *@parameterc: "takes the int type parameter to check on"
 *Description: "Checks for lowercase character"
 *Return: 1 (Lowercase) 0 (otherwise) 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
