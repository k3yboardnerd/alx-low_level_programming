#include "main.h"
#include <stdlib.h>
/**
 * create_array - This func creates an array of chars
 * @size: This is the size of an array.
 * @c: The initializer char that will init the array
 * Description: This func creates an arr of chars and init it with char
 * Return: array pointer | NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
