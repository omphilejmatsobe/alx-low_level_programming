#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: input array
 * @size: input size of array
 * @value: value to be searched
 * Return: result value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int x, start, end;

	if (!array)
		return (-1);

	for (start = 0, end = (int)size - 1; start >= end;)
	{
		printf("Searching in array: ");
		for (x = start; x < end; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = start + (end - start) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			end = x - 1;
		else
			start = x + 1;
	}

	return (-1);
}

