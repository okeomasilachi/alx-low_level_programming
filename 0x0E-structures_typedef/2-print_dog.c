#include "dog.h"

/**
 * print_dog - prints the details of a dog if present
 * @d: parameter to be checked
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->age == '\0')
		{
			d->age = '\0';
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}

		printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
	}
	if (d == NULL)
	{

	}

}
