#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - This function frees the dog mem
 * @d: the dog instance
 *
 * Description: This fucntion frees the dog mem
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
	{
		return;
	}
}
