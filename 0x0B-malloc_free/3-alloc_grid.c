#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the with of the grid
 * @height: the heightog the grid
 *
 * Return: the 2D grid array, if success. Null if it fails.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	arr = malloc((height * sizeof(int *)) + sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc((width * sizeof(int)) + sizeof(char));
		if (arr[x] == NULL)
		{
			while (x > 0)
			{
				free(arr[x]);
				x--;
			}
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}

		arr[x][y] = '\0';
	}

	arr[x] = '\0';
	return (arr);
}
