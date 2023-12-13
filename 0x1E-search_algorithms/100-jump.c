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
	size_t x = 0, n, jump;
	n = 0;

	if (!array || size == 0)
		return (-1);

	for (x = sqrt(size); x < size; x += n)
	{
		if (array[x] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", x - n, x);
	for (jump = x - n; jump < size && jump <= x; jump++)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
	}
	return (-1);
}

