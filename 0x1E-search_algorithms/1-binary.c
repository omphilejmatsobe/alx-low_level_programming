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
	size_t x = 0;
	int *arr = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (x = 0, printf("Searching in array: "); x < size; x++)
			printf("%d%s", arr[x], x + 1 == size ? "\n" : ", ");

		x = (size - 1) / 2;
		if (arr[x] == value)
			return ((arr - array) + x);
		else if (arr[x] > value)
			size = x;
		else
		{
			arr += (x + 1);
			size -= (x + 1);
		}
	}

	return (-1);
}
