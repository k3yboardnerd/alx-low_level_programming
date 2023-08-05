#include "main.h"
#include <stdio.h>
/**
 * main - This program prints all arguments it recieves
 * @argc: the total number of command line args
 * @argv: the array holding all cmd args received
 * Description: This program prints all arguments it reeives
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc > i)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
