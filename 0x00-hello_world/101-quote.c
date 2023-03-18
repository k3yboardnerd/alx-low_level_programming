#include <stdio.h>
#include <unistd.h>
/**
 *main -Entry point
 *Description: 'Prints a quote'
 *Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 54);
	return (1);
}
