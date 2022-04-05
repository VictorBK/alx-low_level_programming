#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * the grid that was previously created by my malloc
 * @grid: pointer to 2 dimensional array
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int m;

	if (grid == NULL)
		free(grid);

	for (m = 0; m < height; m++)
		free(grid[m]);

	free(grid);
}
