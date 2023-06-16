#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: input minimum int range
 * @max: input maximum int range
 *
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *intA;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	intA = malloc(sizeof(int) * size);

	if (intA == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		intA[x] = min++;

	return (intA);
}
