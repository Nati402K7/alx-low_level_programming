#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - A program that countes the string length
 * @str: input string
 * Return: counted string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}

/**
 * _strcopy - A program that copy from another function to another function
 * @src: input string
 * @dest: copy address
 * Return: Dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - A program that gets a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: new dog otherwith null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = (dog_t *) malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);

	return (d);
}
