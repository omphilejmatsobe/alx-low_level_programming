#include "search_algos.h"
#include <math.h>

/**
 * jump_search - funct that searches for a value in a sorted array
 * @array: input array
 * @size: size of the array
 * @value: value to be searched
 * Return: result value if success else -1 if value not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, jump = sqrt(size);

	if (!array)
		return (-1);

	while (x < size && array[x] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		x += jump;
	}

	jump = x - jump;

	printf("Value found between indexes [%lu] and [%lu]\n", jump, x);

	x = x >= size ? size - 1 : x;

	while (jump <= x)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
		jump++;
	}
	return (-1);
}
