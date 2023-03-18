#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Prints Alphabets in lower and upper case'
 *Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
