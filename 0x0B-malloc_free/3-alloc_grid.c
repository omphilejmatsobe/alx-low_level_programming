#include "main.h"
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: the input integer for the width
 * @height: the input integer for the height
 *
 * Returns: A to dimensional array of integers 
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);

		if(arr[x] == NULL)
			return (NULL);

		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}

	return (arr);
}
