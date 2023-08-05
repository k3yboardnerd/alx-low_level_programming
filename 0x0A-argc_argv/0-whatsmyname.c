#include "main.h"
#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 * @argc: the total number of command line arguments
 * @argv: the array of command line arguments values
 * Description: This program prints its name
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
