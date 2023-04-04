#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: 2d array/ board
 * Description: prints chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int o;
	int m;

	for (o = 0; o < 8; o++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[o][m]);
		}
		_putchar('\n');
	}
}
