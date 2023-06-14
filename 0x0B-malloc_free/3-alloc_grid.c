#include "main.h"
/**
 * **alloc_grid - return a pointer to a 2 dimensional array of int
 * @width: input int width.
 * @height: input int height.
 * Return: pointer to dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(**arr));
		if (arr[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(arr[x]);
			free(arr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}
