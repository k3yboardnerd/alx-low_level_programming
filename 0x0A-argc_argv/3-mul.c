#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program multiplies two numbers
 * @argc: the total number of cmd line args
 * @argv: the array storing numbers to be multiplied
 * Description: This program multiplies two numbers
 * Return: 0 if successful/ 1 if error
 */
int main(int argc, char *argv[])
{
	int limit = 3;

	if (argc == limit)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
