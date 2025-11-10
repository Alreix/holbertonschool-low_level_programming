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
	int h;
	int w;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(*grid) * height);

		if (grid == NULL)
			return (NULL);

	for (h = 0; h <= height - 1; h++)
		grid[h] = malloc(width * sizeof(int));

	for (h = 0; h <= height - 1; h++)
	{
		for (w = 0; w <= width - 1; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
