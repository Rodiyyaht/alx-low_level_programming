#include "main.h"
#include <stdlib.h>

/**
 * free_grid - it frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: the 2-dimensional array of integers to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int gird;

	for (gird = 0; gird < height; gird++)
		free(grid[gird]);
	free(grid);
}
