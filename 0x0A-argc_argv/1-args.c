#include "main.h"
#include <stdio.h>
/**
 * main - This program prints the number of args passed into it
 * @argc: the total number of command line arguments
 * @argv: the array of command line arguments values (unused and marked as void)
 * Description: This program prints the number of arguments passed into it
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 1)
	{
		printf("%d\n", argc--);
	}
	return (0);
}
