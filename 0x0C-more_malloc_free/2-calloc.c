#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - This func allocates memory for an array
 * @nmemb: number of elements
 * @size:  number of bytes per element in an array/pointer
 * Description: This func allocates memory to an array for each elem in it
 * Return: pointer to the array/allocated mem or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointerArr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointerArr = malloc(nmemb * size);

	if (pointerArr != NULL)
	{
		memset(pointerArr, 0, nmemb * size);
	}
	else
	{
		return (NULL);
	}

	return (pointerArr);
}
