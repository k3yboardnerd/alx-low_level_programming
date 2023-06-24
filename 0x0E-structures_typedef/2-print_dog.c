#include "dog.h"
#include <stdio.h>
/**
 * print_dog - this fucntion prints the dog struct
 * @d: the struct of the dog to be printed
 *
 * Description: This func prints props/fields of dog struct
 * Return: NULL / void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(NULL);
	}

	if (d->name == NULL)
	{
		printf("Name: %s\n", "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d->age == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}
}
