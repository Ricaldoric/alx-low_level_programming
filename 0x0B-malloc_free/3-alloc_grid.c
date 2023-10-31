#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	/* Check if width or height is invalid */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for the array of pointers (rows) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	/* Allocate memory for each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated rows on failure */
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		/* Initialize each element in the row to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
