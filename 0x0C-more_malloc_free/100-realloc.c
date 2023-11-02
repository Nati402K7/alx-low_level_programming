#include "main.h"

/**
 * _realloc - A function that reallocates a memmory block
 * @ptr: pointer on memory
 * @old_size: allocated space bytes
 * @new_size: new memory block bytes
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		return (p);
	}

	if (new_size > old_size)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);

		free(ptr);
	}
	return (p);
}
