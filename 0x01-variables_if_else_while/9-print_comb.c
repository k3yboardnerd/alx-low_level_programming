#include <stdio.h>
/**
 *main -Entry point
 *Description: 'Prints a combination of numbers'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar('\n');
		putchar(',');
	}
	return (0);
}
