#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - This program adds positive numbers passed in cmd args
 * @argc: the total number of cmd args passed
 * @argv: the array storing numbers passed in cmd args
 * Description: This program adds positive numbers
 * Return: 0 if successful | 1 if error
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int sum = 0;

	if (argc <= i)
	{
		printf("0\n");
	}
	else if (argc > i)
	{
		while (argc > i)
		{
			char *argument = argv[i];

			while (argument[j] != '\0')
			{
				if (isdigit(argument[j]))
				{
					j++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argument);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
