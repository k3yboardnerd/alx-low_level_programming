#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Prints numbers of base 16 from 0 to 16'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(i + '0');
	}

	for (i = 97; i <= 104; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
