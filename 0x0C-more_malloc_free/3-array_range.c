#include "main.h"

/**
 * arrat_range - creates an array of integers
 * @min: minimum 
 * @max: maximum
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pointer, x;

	if (min > max)
		return (NULL);

	pointer = malloc(sizeof(*pointer) * (max - min + 1));
	if (pointer == NULL)
		return (NULL);
	for (x = 0; x < (max - min); x++)
		pointer[x] = (x + min);

	if ( max == min)
		pointer[0] = max;

	return (pointer);
}
