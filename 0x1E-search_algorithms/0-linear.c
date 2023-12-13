#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array: input array of integers
 * @size: input size of array
 * @value: value to be searched
 * Return: result value if success else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < (int) size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
