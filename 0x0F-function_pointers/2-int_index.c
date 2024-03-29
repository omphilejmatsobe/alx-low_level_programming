#include "function_pointers.h"
/**
 * int_index - Searches for an integer.
 * @array: Input array.
 * @size: The size of the array. 
 * @cmp: The pointer to the fuction that check if index of array is an int.
 *
 * Return: Index of array, if fails return -1;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array == NULL || size <= 0 || (*cmp) == NULL)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		if ((*cmp)(array[counter]) > 0)
			return(counter);
	}

	return (-1);
}
