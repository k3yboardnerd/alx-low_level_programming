#include "main.h"

/**
 *islower - Entry point
 *Description: "Checks for lowercase character"
 *return: 1 (Success)
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
