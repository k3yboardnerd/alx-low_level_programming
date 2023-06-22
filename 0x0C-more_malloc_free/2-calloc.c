#include "main.h"
#include <stdlib.h>
/**
 * _calloc - This func allocates memory for an array
 * @nmemb: number of elements
 * @size:  number of bytes per element in an array/pointer
 * Description: This func allocates memory to an array for each elem in it
 * Return: pointer to the array/allocated mem or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int *pointerArr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointerArr = malloc(nmemb * size);

	if (pointerArr != NULL)
	{
		while (i < nmemb)
		{
			pointerArr[i] = 0;
			i++;
		}
	}
	else
	{
		return (NULL);
	}

	return (pointerArr);
}
