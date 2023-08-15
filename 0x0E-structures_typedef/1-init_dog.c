#include "dog.h"
/**
 * init_dog - This func inits the dog struct
 * @d: the variable holding the struct of dog (empty)
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function populates the props/fields of struct dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
