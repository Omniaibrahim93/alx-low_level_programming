#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory allocated  grid
 * @height: height of the grid
 * @grid: grid to free
 */
void free_grid(int **grid, int height)
{
	int x;

	if (height == 0 || grid == NULL)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
