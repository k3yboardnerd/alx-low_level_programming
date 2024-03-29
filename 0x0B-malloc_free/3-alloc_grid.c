#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This func returns a pointer to a 2 dimensional arr of int
 * @width: width of grid/arr
 * @height: height of grid/arr
 * Descritpion: returns a pointer to a 2D array of integers
 * Return: arr of int | NULL
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, m = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (j < i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		while (m < width)
		{
			grid[i][m] = 0;
			m++;
		}
		i++;
	}
	return (grid);
}
