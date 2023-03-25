#ifndef DOG_H
#define DOG_H

/**
 * struct dog - used for collecting data on dogs
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: a data tyoe for dog
 */

#include <stdio.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);






#endif /* DOG_H */
