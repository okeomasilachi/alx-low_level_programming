#include "dog.h"

/**
 * init_dog - function that returns data
 *
 * @d: lass of strut
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return(NULL);
	else
		d->name = name;
		d->age = age;
		d->owner = owner;
}
