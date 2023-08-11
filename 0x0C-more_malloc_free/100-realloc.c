#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the prev mem
 * @old_size: size in bytes of ptr
 * @new_size: new size to be allocated in new mem, in bytes
 * Description: reallcates a mem block using malloc and free to ptr
 * Return: nothing or new pointer of new mem addrs
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		min = old_size < new_size ? old_size : new_size;
		memcpy(new_ptr, ptr, min);

		if (new_size > old_size)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
	}
	return (new_ptr);
}
