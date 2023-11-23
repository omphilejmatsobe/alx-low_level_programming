#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array, and initializes it with a specific char
 * @size: input unisgned int for the size of the array
 * @c: the char type data to initialize the array
 *
 * Return: if success arr.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	x = 0;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}

	return (arr);
}
