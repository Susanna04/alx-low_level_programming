#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the dog
 * @d: structure of dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
