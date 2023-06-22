#include <stdio.h>
/**
 * main - this program will print the name of a file it was compiled from
 * Return: 0 if success | 1 if error
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
