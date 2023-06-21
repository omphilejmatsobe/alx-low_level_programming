#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Exucute function given as a par on each elm of array
 * @array: input int array pointer
 * @size: input pointer sizet size
 * @action: input pointer to function action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
		action(array[i]);
}
