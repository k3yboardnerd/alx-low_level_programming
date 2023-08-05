#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - This program prints the minimum num of coins for an amount of money
 * @argc: the cents/amount of money
 * @argv: the array storing args/money/cents
 * Description: This program returns number of coins for a certain money
 * Return: coins total
 */
int main(int argc, char *argv[])
{
	int i = 0, total_coins = 0, coins[] = {25, 10, 5, 2, 1};
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		total_coins += cents /coins[i];
		cents %= coins[i];
		i++;
	}

	printf("%d\n", total_coins);
	return (0);
}
