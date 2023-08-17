#include "function_pointers.h"
/**
 * int_index - This func returns the index of the elem in arr which
 *            is equal to the int needed by cmp
 * @array: Array to be used for iterating
 * @size: Size of the array
 * @cmp: Function to be called as the seed
 *
 * Description: This func returns the index of the elem in arr which
 * Return: index of elem / NULL if fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int elem;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			elem = array[i];

			if (cmp(elem) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
