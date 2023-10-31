#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by your alloc_grid function
 * @grid: the 2D grid to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;
	/* Free each row */
	for (i = 0; i < height; i++)
		free(grid[i]);
	/* Free the array of pointers (rows) */
	free(grid);
}
