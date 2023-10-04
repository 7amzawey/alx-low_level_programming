#include "main.h"
#include <stdlib.h>
/**
 * free_grid - this function frees a 2 d grid
 * previously created by alloc_grid function
 * @grid: is the grid
 * @height: is the height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
