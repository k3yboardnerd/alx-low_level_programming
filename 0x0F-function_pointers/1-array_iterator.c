#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - This func execs a func for each elem of arr
 * @array: Array of elems
 * @size: Size of an array
 * @action: Fucntion to be exec for each elem in array
 *
 * Description: This func execs a func for each elem of arr
 * Return: void / NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
	else
	{
		return;
	}
}
