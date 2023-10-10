#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - The new dog to be initialized
 * @d: Pointer to dog
 * @name: The dogs name
 * @age: The age pf the dog
 * @owner: The dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
