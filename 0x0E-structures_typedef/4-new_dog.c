#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - This function creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This function creates a new dog
 * Return: NULL if the func fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd = (dog_t *) malloc(sizeof(dog_t));

	if (nd != NULL)
	{
		nd->name = (char *) malloc(strlen(name) + 1);
		nd->owner = (char *) malloc(strlen(owner) + 1);

		if (nd->name == NULL || nd->owner == NULL)
		{
			free(nd->name);
			free(nd->owner);
			free(nd);
			return (NULL);
		}
		strcpy(nd->name, name);
		strcpy(nd->owner, owner);
		nd->age = age;
	}
	else
	{
		return (NULL);
	}

	return (nd);
}
