#include "main.h"

/**
 * _array_range - Creates an array of integers.
 * @min: minimun elements to included.
 * @max: maximum elements to be included.
 *
 * Return: The pointer to the new array.
 * If program fails it returns NULL.
 */
int *array_range(int min, int max)
{
	int *intArray, count;

	if (min > max)
		return (NULL);

	intArray = malloc(sizeof(*intArray) * ((max - min) + 1) );

	for (count = 0; count < ((max - min) + 1); count++)
	{
		intArray[count] = (count + min);
	}

	return (intArray);
}
