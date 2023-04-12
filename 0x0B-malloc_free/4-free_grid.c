#include "main.h"
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: Pointer to the grid to be freed
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
