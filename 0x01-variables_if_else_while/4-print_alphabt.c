#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Prints letters except for q & e'
 *Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
