#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: int
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
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
