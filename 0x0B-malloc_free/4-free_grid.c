#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by the alloc_grid function.
 * @grid: input grid to be freed
 * @height: input height
 * Return: None.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = (height - 1); x >= 0; x--)
	{
		free(grid[x]);
	}
	free(grid);
}
