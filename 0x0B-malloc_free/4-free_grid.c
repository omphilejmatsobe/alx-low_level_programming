#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by the alloc_grid function.
 * @grid: input grid to be freed
 * @height: input height
 * Return: None.
 */
void free_grid(int **grid, int height)
{
	while (height >= 0)
	{
	       free(grid[height]);
	       height--;
	}

	free(grid);
}
