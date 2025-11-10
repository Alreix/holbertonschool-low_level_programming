#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid of integers.
 * @grid: Pointer to the 2D grid to free.
 * @height: Number of rows in the grid.
 *
 * Description: Frees each row of the grid, then frees the grid itself.
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

