#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: input
* @height: input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
	int **cha;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	cha = malloc(sizeof(int *) * height);

	if (cha == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		cha[x] = malloc(sizeof(int) * width);
		if (cha[x] == NULL)
		{
			for (; x >= 0; x--)
			free(cha[x]);
			free(cha);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			cha[x][y] = 0;
	}
	return (cha);
}
