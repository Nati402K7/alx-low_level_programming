#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to 2 dimensional array
 * @width: input width
 * @height: input height
 * Return: 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **n, i, j;

	n = malloc(sizeof(*n) * height);

	if (width <= 0 || height <= 0 || n == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			n[i] = malloc(sizeof(**n) * width);

			if (n[i] == 0)
			{
				while (i--)
					free(n[i]);

				free(n);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				n[i][j] = 0;
		}
	}
	return (n);
}
