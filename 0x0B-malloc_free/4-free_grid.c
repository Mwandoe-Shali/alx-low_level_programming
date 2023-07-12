#include <stdlib.h>
#include "main.h"

/**
 * free_grid - allocates a grid, make space and free space
 * @grid: grid to free
 * @height: height of the array
 * Return:returns void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return (NULL);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
