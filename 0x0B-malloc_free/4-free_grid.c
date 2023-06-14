#include "main.h"
#include <stdlib.h>
/**
 * free_grid - this func frees alloc_grid func
 * @grid: address of the 2D grid
 * @height: height of the grid
 * Description: Frees the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	int size = height;

	if (grid == NULL)
	{
		return;
	}

	while(i < size)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
