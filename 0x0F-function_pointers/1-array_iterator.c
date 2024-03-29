#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Input array to passed on to the fuction.
 * @size: Input size of the array.
 * @action: Input function to be executed.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && (*action) != NULL)
	{
		for (x = 0; x < size; x++)
			(*action)(array[x]);
	}
}
