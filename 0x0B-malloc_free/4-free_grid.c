#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 *
 * @grid: Pointer to a 2D array of integers to be freed.
 * @height: The number of rows in the grid.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		int *p1 = grid[i];
		free(p1);
	}

	free(grid);
}
