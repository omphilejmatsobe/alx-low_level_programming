#include "main.h"
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: the input integer for the width
 * @height: the input integer for the height
 *
 * Return: A to dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			z = x;

			while (z >= 0)
			{
				free(arr[z]);
				z--;
			}
			free(arr);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{

			arr[x][y] = 0;
		}
	}
	return (arr);
}
