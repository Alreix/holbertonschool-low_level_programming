#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Return a pointer to a dimensional array of int.
 * @width: The width of array.
 * @height: the height of array.
 *
 * Description: return a pointer to a dimensional array of int.
 * Return: return NULL (if fail), and if width or height is 0 or
 * negative. Else return the pointer to a 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

		if (grid == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
