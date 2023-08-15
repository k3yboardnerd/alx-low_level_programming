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
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
