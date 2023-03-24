#include "main.h"

/**
 *positive_or_negative - checks whether the code is positve or negative
 *@i: the neumber to be evaluated
 *Description: This function checks whether the number is negative or positive
 *Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is postive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
