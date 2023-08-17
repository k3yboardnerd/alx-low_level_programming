#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations.
 * @argc: the number of args
 * @argv: array of args
 * Description: performs simple operations.
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *op = argv[2];
	int n1, n2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((n2 == 0) && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		return (100);
	}

	f = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", f(n1, n2));

	return (0);
}
