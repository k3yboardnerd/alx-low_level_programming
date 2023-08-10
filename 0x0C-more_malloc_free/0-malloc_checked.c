#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - This function allocates memory using malloc()
 * @b: number of bytes to be allocated to the variable
 * Description: This function allocates memory of given bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
