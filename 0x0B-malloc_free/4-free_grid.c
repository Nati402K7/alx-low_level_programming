#include "main.h"

/**
 * free_grid - A function that frees a 2 dimentional grid
 * @grid: input array
 * @height: height of array
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
