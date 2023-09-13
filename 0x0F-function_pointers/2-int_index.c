#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: int array
 * @size: number of elements in array
 * @cmp: pointers of function
 * Return: succes 0 otherwith -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}

	return (-1);
}
