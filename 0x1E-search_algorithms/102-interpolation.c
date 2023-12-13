#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array of integers using
 * the Interpolation search algorithm
 * @array: input integer array
 * @size: input size of the array
 * @value: value to be search for
 * Return: result value if success else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t num = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		num = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
		if (num >= size)
		{
			printf("Value checked array[%lu] is out of range\n", num);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", num, array[num]);

		if (array[num] == value)
			return (num);
		else if (array[num] > value)
			high = num - 1;
		else
			low = num + 1;
	}
	return (-1);
}
