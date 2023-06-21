#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * int_index - searchs for an int
 * @array: input int array pointer
 * @size: input pointer size of the array
 * @cmp: input pointer to the funct
 * Return: return -1 if size <=0 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	while (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
