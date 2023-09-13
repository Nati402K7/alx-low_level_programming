#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: int array
 * @size: size of array
 * @action: pointer of function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = array + size - 1;

	if (array && size && action)
		while (array <= i)
			action(*array++);
}
