#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize the variable of struct dog
 *
 * @name: String
 * @d: Pointer to struct dog
 * @age: Age of dog
 * @owner: Owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
