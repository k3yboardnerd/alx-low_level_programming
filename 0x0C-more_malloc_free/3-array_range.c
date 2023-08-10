#include "main.h"
#include <stdlib.h>
/**
 * array_range - This func creates an array of integers and allocates them size
 * @min: minimun range of int
 * @max: maximum range of int
 * Dscription: This function creates and allocats bytes to the array
 * Return: pointer of array
 */
int *array_range(int min, int max)
{
	int arrSize;
	int *arr;
	int iterator = 0;

	if (min > max)
	{
		return (NULL);
	}

	arrSize = max - min + 1;
	arr = malloc(arrSize * sizeof(int));

	if (arr != NULL)
	{
		while (iterator < arrSize)
		{
			arr[iterator] = min++;
			iterator++;
		}
	}
	else
	{
		return (NULL);
	}

	return (arr);
}
