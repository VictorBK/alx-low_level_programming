#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Each element of grid to be initialized to 0
 * @width: outlines width of grid
 * @height: outlines height of grid
 * Return: pointer to 2 dimensional array of integers
 * NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocating the memory for rows */
	grid = malloc(height * sizeof(int *));

	/*validating the memory */
	if (grid == NULL)
		return (NULL);

	/* allocating the memory for the columns of each row */
	for (m = 0; m < height; m++)
	{
		grid[m] = malloc(width * sizeof(int));
		if (grid[m] == NULL)
		{
			for (m = 0; m < height; m++)
				free(grid[m]);
			free(grid);
			return (NULL);
		}
		/* set array of values to 0 */
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}

	return (grid);
}
